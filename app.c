/***************************************************************************//**
 * @file  app.c
 * @brief I2C scanner application
 *******************************************************************************
 * # License
 * <b>Copyright 2022 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided \'as-is\', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *******************************************************************************
 * # Evaluation Quality
 * This code has been minimally tested to ensure that it builds and is suitable
 * as a demonstration for evaluation purposes only. This code will be maintained
 * at the sole discretion of Silicon Labs.
 ******************************************************************************/
// -----------------------------------------------------------------------------
//                                   Includes
// -----------------------------------------------------------------------------

#include "i2c_scan.h"
#include "pms7003.h"
#include "bh1750.h"
#include "ADC_lib.h"
#include "lora_uart.h"
#include "sl_sleeptimer.h"
#include "sl_i2cspm_instances.h"
#include <stdio.h>

// -----------------------------------------------------------------------------
//                                   Defines
// -----------------------------------------------------------------------------

#define MEASURE_TIMEOUT 60000

// -----------------------------------------------------------------------------
//                                Global Variables
// -----------------------------------------------------------------------------

sl_bme280_dev bme;
pms_dev pm;
sl_bh1750_config cfg;
sl_bh1750_dev dev;
float uv;
float bat;
sl_sleeptimer_timer_handle_t timer;
bool toggle_timeout = false;


// -----------------------------------------------------------------------------
//                          Public Function Definitions
// -----------------------------------------------------------------------------

static void on_timeout(sl_sleeptimer_timer_handle_t *handle,
                       void *data);


/***************************************************************************//**
 * Initialize application.
 ******************************************************************************/
void app_init(void)
{
  i2c_scan_init(sl_i2cspm_mikroe);
  pms7003_init(&pm, outdoor);
  cfg.address = BH1750_ADDR_LO;
  cfg.mode = BH1750_MODE_CONTINUOUS;
  cfg.resolution = BH1750_RES_HIGH;
  bh1750_init(sl_i2cspm_inst0);
  if (bh1750_configure(cfg) == SL_STATUS_OK) {
      printf("Init BH1750 done!\n");
  }
  else {
      printf("Init BH1750 failed!");
  }
  ADC_init();

  // Create timer for waking up the system periodically.
  sl_sleeptimer_start_periodic_timer_ms(&timer,
                                        MEASURE_TIMEOUT,
                                        on_timeout, NULL,
                                        0,
                                        SL_SLEEPTIMER_NO_HIGH_PRECISION_HF_CLOCKS_REQUIRED_FLAG);
}

/***************************************************************************//**
 * App ticking function.
 ******************************************************************************/
void app_process_action(void)
{
  if (toggle_timeout == true) {
      i2c_scan_process(&bme);
      if (bh1750_measure_illuminance(&dev, cfg) == SL_STATUS_OK) {
          printf("Lux: %d\n\r", dev.level);
      }
      ADC_read(&uv);
      ADC_read_bat(&bat);
      pms7003_process(&pm);

      lora_send(bme, pm, dev, uv, bat);
  }
  toggle_timeout = false;
}

static void on_timeout(sl_sleeptimer_timer_handle_t *handle,
                       void *data)
{
  (void)&handle;
  (void)&data;
  toggle_timeout = true;
}


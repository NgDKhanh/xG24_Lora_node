/*
 * lora_uart.c
 *
 *  Created on: 12 Sep 2023
 *      Author: admin
 */

#include "sl_iostream.h"
#include "sl_iostream_init_instances.h"
#include "sl_iostream_handles.h"
#include "lora_uart.h"
#include <stdio.h>

char data[50];

sl_status_t lora_send(sl_bme280_dev bme, pms_dev pms, sl_bh1750_dev bh1750, float uv, float bat)
{
  sprintf(data, "%.2f,%.2f,%.1f,%u,%u,%u,%.2f,%.2f,%u", bme.temperature, bme.humidity, bme.pressure,
                                                   pms.pm1_0, pms.pm2_5, pms.pm10,
                                                   uv,
                                                   bat,
                                                   bh1750.level);
  sl_status_t status = sl_iostream_write(sl_iostream_mikroe_handle, data, 50);
  if (status == SL_STATUS_OK) {
      printf("Send lora %s\n\r", data);
  }
  else {
      printf("Fail to send lora!");
  }
  return status;
}





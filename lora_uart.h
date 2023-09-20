/*
 * lora_uart.h
 *
 *  Created on: 12 Sep 2023
 *      Author: admin
 */

#ifndef LORA_UART_H_
#define LORA_UART_H_

#include "i2c_scan.h"
#include "bh1750.h"
#include "pms7003.h"

sl_status_t lora_send(sl_bme280_dev bme, pms_dev pms, sl_bh1750_dev bh1750, float uv, float bat);

#endif /* LORA_UART_H_ */

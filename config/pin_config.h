#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

// $[CMU]
// [CMU]$

// $[LFXO]
// [LFXO]$

// $[PRS.ASYNCH0]
// [PRS.ASYNCH0]$

// $[PRS.ASYNCH1]
// [PRS.ASYNCH1]$

// $[PRS.ASYNCH2]
// [PRS.ASYNCH2]$

// $[PRS.ASYNCH3]
// [PRS.ASYNCH3]$

// $[PRS.ASYNCH4]
// [PRS.ASYNCH4]$

// $[PRS.ASYNCH5]
// [PRS.ASYNCH5]$

// $[PRS.ASYNCH6]
// [PRS.ASYNCH6]$

// $[PRS.ASYNCH7]
// [PRS.ASYNCH7]$

// $[PRS.ASYNCH8]
// [PRS.ASYNCH8]$

// $[PRS.ASYNCH9]
// [PRS.ASYNCH9]$

// $[PRS.ASYNCH10]
// [PRS.ASYNCH10]$

// $[PRS.ASYNCH11]
// [PRS.ASYNCH11]$

// $[PRS.ASYNCH12]
// [PRS.ASYNCH12]$

// $[PRS.ASYNCH13]
// [PRS.ASYNCH13]$

// $[PRS.ASYNCH14]
// [PRS.ASYNCH14]$

// $[PRS.ASYNCH15]
// [PRS.ASYNCH15]$

// $[PRS.SYNCH0]
// [PRS.SYNCH0]$

// $[PRS.SYNCH1]
// [PRS.SYNCH1]$

// $[PRS.SYNCH2]
// [PRS.SYNCH2]$

// $[PRS.SYNCH3]
// [PRS.SYNCH3]$

// $[GPIO]
// [GPIO]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[TIMER2]
// [TIMER2]$

// $[TIMER3]
// [TIMER3]$

// $[TIMER4]
// [TIMER4]$

// $[USART0]
// USART0 RX on PA06
#define USART0_RX_PORT                           gpioPortA
#define USART0_RX_PIN                            6

// USART0 TX on PA05
#define USART0_TX_PORT                           gpioPortA
#define USART0_TX_PIN                            5

// [USART0]$

// $[I2C1]
// [I2C1]$

// $[EUSART1]
// EUSART1 CS on PC00
#define EUSART1_CS_PORT                          gpioPortC
#define EUSART1_CS_PIN                           0

// EUSART1 CTS on PA09
#define EUSART1_CTS_PORT                         gpioPortA
#define EUSART1_CTS_PIN                          9

// EUSART1 RTS on PA08
#define EUSART1_RTS_PORT                         gpioPortA
#define EUSART1_RTS_PIN                          8

// EUSART1 RX on PD05
#define EUSART1_RX_PORT                          gpioPortD
#define EUSART1_RX_PIN                           5

// EUSART1 SCLK on PC01
#define EUSART1_SCLK_PORT                        gpioPortC
#define EUSART1_SCLK_PIN                         1

// EUSART1 TX on PC02
#define EUSART1_TX_PORT                          gpioPortC
#define EUSART1_TX_PIN                           2

// [EUSART1]$

// $[KEYSCAN]
// [KEYSCAN]$

// $[LETIMER0]
// [LETIMER0]$

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[VDAC0]
// [VDAC0]$

// $[VDAC1]
// [VDAC1]$

// $[PCNT0]
// [PCNT0]$

// $[HFXO0]
// [HFXO0]$

// $[I2C0]
// I2C0 SCL on PB04
#define I2C0_SCL_PORT                            gpioPortB
#define I2C0_SCL_PIN                             4

// I2C0 SDA on PB05
#define I2C0_SDA_PORT                            gpioPortB
#define I2C0_SDA_PIN                             5

// [I2C0]$

// $[EUSART0]
// [EUSART0]$

// $[PTI]
// [PTI]$

// $[MODEM]
// [MODEM]$

// $[CUSTOM_PIN_NAME]
// [CUSTOM_PIN_NAME]$

#endif // PIN_CONFIG_H


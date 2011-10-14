/* $asf_license$ */

#ifndef _SAM3N1C_
#define _SAM3N1C_

/** \addtogroup SAM3N1C_definitions SAM3N1C definitions
  This file defines all structures and symbols for SAM3N1C:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
*/
/*@{*/

#ifdef __cplusplus
 extern "C" {
#endif 

#ifndef __ASSEMBLY__
#include <stdint.h>
#ifndef __cplusplus
typedef volatile const uint32_t RoReg; /**< Read only 32-bit register (volatile const unsigned int) */
#else
typedef volatile       uint32_t RoReg; /**< Read only 32-bit register (volatile const unsigned int) */
#endif
typedef volatile       uint32_t WoReg; /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile       uint32_t RwReg; /**< Read-Write 32-bit register (volatile unsigned int) */
#endif

/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR SAM3N1C */
/* ************************************************************************** */
/** \addtogroup SAM3N1C_cmsis CMSIS Definitions */
/*@{*/

/**< Interrupt Number Definition */
typedef enum IRQn
{
/******  Cortex-M3 Processor Exceptions Numbers ******************************/
  NonMaskableInt_IRQn   = -14, /**<  2 Non Maskable Interrupt                */
  MemoryManagement_IRQn = -12, /**<  4 Cortex-M3 Memory Management Interrupt */
  BusFault_IRQn         = -11, /**<  5 Cortex-M3 Bus Fault Interrupt         */
  UsageFault_IRQn       = -10, /**<  6 Cortex-M3 Usage Fault Interrupt       */
  SVCall_IRQn           = -5,  /**< 11 Cortex-M3 SV Call Interrupt           */
  DebugMonitor_IRQn     = -4,  /**< 12 Cortex-M3 Debug Monitor Interrupt     */
  PendSV_IRQn           = -2,  /**< 14 Cortex-M3 Pend SV Interrupt           */
  SysTick_IRQn          = -1,  /**< 15 Cortex-M3 System Tick Interrupt       */
/******  SAM3N1C specific Interrupt Numbers *********************************/
  
  SUPC_IRQn            =  0, /**<  0 SAM3N1C Supply Controller (SUPC) */
  RSTC_IRQn            =  1, /**<  1 SAM3N1C Reset Controller (RSTC) */
  RTC_IRQn             =  2, /**<  2 SAM3N1C Real Time Clock (RTC) */
  RTT_IRQn             =  3, /**<  3 SAM3N1C Real Time Timer (RTT) */
  WDT_IRQn             =  4, /**<  4 SAM3N1C Watchdog Timer (WDT) */
  PMC_IRQn             =  5, /**<  5 SAM3N1C Power Management Controller (PMC) */
  EFC_IRQn             =  6, /**<  6 SAM3N1C Enhanced Flash Controller (EFC) */
  UART0_IRQn           =  8, /**<  8 SAM3N1C UART 0 (UART0) */
  UART1_IRQn           =  9, /**<  9 SAM3N1C UART 1 (UART1) */
  PIOA_IRQn            = 11, /**< 11 SAM3N1C Parallel I/O Controller A (PIOA) */
  PIOB_IRQn            = 12, /**< 12 SAM3N1C Parallel I/O Controller B (PIOB) */
  PIOC_IRQn            = 13, /**< 13 SAM3N1C Parallel I/O Controller C (PIOC) */
  USART0_IRQn          = 14, /**< 14 SAM3N1C USART 0 (USART0) */
  USART1_IRQn          = 15, /**< 15 SAM3N1C USART 1 (USART1) */
  TWI0_IRQn            = 19, /**< 19 SAM3N1C Two Wire Interface 0 (TWI0) */
  TWI1_IRQn            = 20, /**< 20 SAM3N1C Two Wire Interface 1 (TWI1) */
  SPI_IRQn             = 21, /**< 21 SAM3N1C Serial Peripheral Interface (SPI) */
  TC0_IRQn             = 23, /**< 23 SAM3N1C Timer/Counter 0 (TC0) */
  TC1_IRQn             = 24, /**< 24 SAM3N1C Timer/Counter 1 (TC1) */
  TC2_IRQn             = 25, /**< 25 SAM3N1C Timer/Counter 2 (TC2) */
  TC3_IRQn             = 26, /**< 26 SAM3N1C Timer/Counter 3 (TC3) */
  TC4_IRQn             = 27, /**< 27 SAM3N1C Timer/Counter 4 (TC4) */
  TC5_IRQn             = 28, /**< 28 SAM3N1C Timer/Counter 5 (TC5) */
  ADC_IRQn             = 29, /**< 29 SAM3N1C Analog To Digital Converter (ADC) */
  DACC_IRQn            = 30, /**< 30 SAM3N1C Digital To Analog Converter (DACC) */
  PWM_IRQn             = 31  /**< 31 SAM3N1C Pulse Width Modulation (PWM) */
} IRQn_Type;

/**
 * \brief Configuration of the Cortex-M3 Processor and Core Peripherals 
 */

#define __CM3_REV              0x0200 /**< SAM3N1C core revision number ([15:8] revision number, [7:0] patch number) */
#define __MPU_PRESENT          0      /**< SAM3N1C does not provide a MPU */
#define __NVIC_PRIO_BITS       4      /**< SAM3N1C uses 4 Bits for the Priority Levels */
#define __Vendor_SysTickConfig 0      /**< Set to 1 if different SysTick Config is used */

/*
 * \brief CMSIS includes
 */

#include <core_cm3.h>

/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAM3N1C */
/* ************************************************************************** */
/** \addtogroup SAM3N1C_api Peripheral Software API */
/*@{*/

#include "component/adc.h"
#include "component/chipid.h"
#include "component/dacc.h"
#include "component/efc.h"
#include "component/gpbr.h"
#include "component/matrix.h"
#include "component/pdc.h"
#include "component/pio.h"
#include "component/pmc.h"
#include "component/pwm.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/rtt.h"
#include "component/spi.h"
#include "component/supc.h"
#include "component/tc.h"
#include "component/twi.h"
#include "component/uart.h"
#include "component/usart.h"
#include "component/wdt.h"
/*@}*/

/* ************************************************************************** */
/*   REGISTER ACCESS DEFINITIONS FOR SAM3N1C */
/* ************************************************************************** */
/** \addtogroup SAM3N1C_reg Registers Access Definitions */
/*@{*/

#include "instance/spi.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/twi0.h"
#include "instance/twi1.h"
#include "instance/pwm.h"
#include "instance/usart0.h"
#include "instance/usart1.h"
#include "instance/adc.h"
#include "instance/dacc.h"
#include "instance/matrix.h"
#include "instance/pmc.h"
#include "instance/uart0.h"
#include "instance/chipid.h"
#include "instance/uart1.h"
#include "instance/efc.h"
#include "instance/pioa.h"
#include "instance/piob.h"
#include "instance/pioc.h"
#include "instance/rstc.h"
#include "instance/supc.h"
#include "instance/rtt.h"
#include "instance/wdt.h"
#include "instance/rtc.h"
#include "instance/gpbr.h"
/*@}*/

/* ************************************************************************** */
/*   PERIPHERAL ID DEFINITIONS FOR SAM3N1C */
/* ************************************************************************** */
/** \addtogroup SAM3N1C_id Peripheral Ids Definitions */
/*@{*/

#define ID_SUPC   ( 0) /**< \brief Supply Controller (SUPC) */
#define ID_RSTC   ( 1) /**< \brief Reset Controller (RSTC) */
#define ID_RTC    ( 2) /**< \brief Real Time Clock (RTC) */
#define ID_RTT    ( 3) /**< \brief Real Time Timer (RTT) */
#define ID_WDT    ( 4) /**< \brief Watchdog Timer (WDT) */
#define ID_PMC    ( 5) /**< \brief Power Management Controller (PMC) */
#define ID_EFC    ( 6) /**< \brief Enhanced Flash Controller (EFC) */
#define ID_UART0  ( 8) /**< \brief UART 0 (UART0) */
#define ID_UART1  ( 9) /**< \brief UART 1 (UART1) */
#define ID_PIOA   (11) /**< \brief Parallel I/O Controller A (PIOA) */
#define ID_PIOB   (12) /**< \brief Parallel I/O Controller B (PIOB) */
#define ID_PIOC   (13) /**< \brief Parallel I/O Controller C (PIOC) */
#define ID_USART0 (14) /**< \brief USART 0 (USART0) */
#define ID_USART1 (15) /**< \brief USART 1 (USART1) */
#define ID_TWI0   (19) /**< \brief Two Wire Interface 0 (TWI0) */
#define ID_TWI1   (20) /**< \brief Two Wire Interface 1 (TWI1) */
#define ID_SPI    (21) /**< \brief Serial Peripheral Interface (SPI) */
#define ID_TC0    (23) /**< \brief Timer/Counter 0 (TC0) */
#define ID_TC1    (24) /**< \brief Timer/Counter 1 (TC1) */
#define ID_TC2    (25) /**< \brief Timer/Counter 2 (TC2) */
#define ID_TC3    (26) /**< \brief Timer/Counter 3 (TC3) */
#define ID_TC4    (27) /**< \brief Timer/Counter 4 (TC4) */
#define ID_TC5    (28) /**< \brief Timer/Counter 5 (TC5) */
#define ID_ADC    (29) /**< \brief Analog To Digital Converter (ADC) */
#define ID_DACC   (30) /**< \brief Digital To Analog Converter (DACC) */
#define ID_PWM    (31) /**< \brief Pulse Width Modulation (PWM) */
/*@}*/

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAM3N1C */
/* ************************************************************************** */
/** \addtogroup SAM3N1C_base Peripheral Base Address Definitions */
/*@{*/

#ifdef __ASSEMBLY__
#define SPI        (0x40008000U) /**< \brief (SPI       ) Base Address */
#define PDC_SPI    (0x40008100U) /**< \brief (PDC_SPI   ) Base Address */
#define TC0        (0x40010000U) /**< \brief (TC0       ) Base Address */
#define TC1        (0x40014000U) /**< \brief (TC1       ) Base Address */
#define TWI0       (0x40018000U) /**< \brief (TWI0      ) Base Address */
#define PDC_TWI0   (0x40018100U) /**< \brief (PDC_TWI0  ) Base Address */
#define TWI1       (0x4001C000U) /**< \brief (TWI1      ) Base Address */
#define PWM        (0x40020000U) /**< \brief (PWM       ) Base Address */
#define USART0     (0x40024000U) /**< \brief (USART0    ) Base Address */
#define PDC_USART0 (0x40024100U) /**< \brief (PDC_USART0) Base Address */
#define USART1     (0x40028000U) /**< \brief (USART1    ) Base Address */
#define ADC        (0x40038000U) /**< \brief (ADC       ) Base Address */
#define PDC_ADC    (0x40038100U) /**< \brief (PDC_ADC   ) Base Address */
#define DACC       (0x4003C000U) /**< \brief (DACC      ) Base Address */
#define PDC_DACC   (0x4003C100U) /**< \brief (PDC_DACC  ) Base Address */
#define MATRIX     (0x400E0200U) /**< \brief (MATRIX    ) Base Address */
#define PMC        (0x400E0400U) /**< \brief (PMC       ) Base Address */
#define UART0      (0x400E0600U) /**< \brief (UART0     ) Base Address */
#define PDC_UART0  (0x400E0700U) /**< \brief (PDC_UART0 ) Base Address */
#define CHIPID     (0x400E0740U) /**< \brief (CHIPID    ) Base Address */
#define UART1      (0x400E0800U) /**< \brief (UART1     ) Base Address */
#define EFC        (0x400E0A00U) /**< \brief (EFC       ) Base Address */
#define PIOA       (0x400E0E00U) /**< \brief (PIOA      ) Base Address */
#define PIOB       (0x400E1000U) /**< \brief (PIOB      ) Base Address */
#define PIOC       (0x400E1200U) /**< \brief (PIOC      ) Base Address */
#define RSTC       (0x400E1400U) /**< \brief (RSTC      ) Base Address */
#define SUPC       (0x400E1410U) /**< \brief (SUPC      ) Base Address */
#define RTT        (0x400E1430U) /**< \brief (RTT       ) Base Address */
#define WDT        (0x400E1450U) /**< \brief (WDT       ) Base Address */
#define RTC        (0x400E1460U) /**< \brief (RTC       ) Base Address */
#define GPBR       (0x400E1490U) /**< \brief (GPBR      ) Base Address */
#else
#define SPI        ((Spi    *)0x40008000U) /**< \brief (SPI       ) Base Address */
#define PDC_SPI    ((Pdc    *)0x40008100U) /**< \brief (PDC_SPI   ) Base Address */
#define TC0        ((Tc     *)0x40010000U) /**< \brief (TC0       ) Base Address */
#define TC1        ((Tc     *)0x40014000U) /**< \brief (TC1       ) Base Address */
#define TWI0       ((Twi    *)0x40018000U) /**< \brief (TWI0      ) Base Address */
#define PDC_TWI0   ((Pdc    *)0x40018100U) /**< \brief (PDC_TWI0  ) Base Address */
#define TWI1       ((Twi    *)0x4001C000U) /**< \brief (TWI1      ) Base Address */
#define PWM        ((Pwm    *)0x40020000U) /**< \brief (PWM       ) Base Address */
#define USART0     ((Usart  *)0x40024000U) /**< \brief (USART0    ) Base Address */
#define PDC_USART0 ((Pdc    *)0x40024100U) /**< \brief (PDC_USART0) Base Address */
#define USART1     ((Usart  *)0x40028000U) /**< \brief (USART1    ) Base Address */
#define ADC        ((Adc    *)0x40038000U) /**< \brief (ADC       ) Base Address */
#define PDC_ADC    ((Pdc    *)0x40038100U) /**< \brief (PDC_ADC   ) Base Address */
#define DACC       ((Dacc   *)0x4003C000U) /**< \brief (DACC      ) Base Address */
#define PDC_DACC   ((Pdc    *)0x4003C100U) /**< \brief (PDC_DACC  ) Base Address */
#define MATRIX     ((Matrix *)0x400E0200U) /**< \brief (MATRIX    ) Base Address */
#define PMC        ((Pmc    *)0x400E0400U) /**< \brief (PMC       ) Base Address */
#define UART0      ((Uart   *)0x400E0600U) /**< \brief (UART0     ) Base Address */
#define PDC_UART0  ((Pdc    *)0x400E0700U) /**< \brief (PDC_UART0 ) Base Address */
#define CHIPID     ((Chipid *)0x400E0740U) /**< \brief (CHIPID    ) Base Address */
#define UART1      ((Uart   *)0x400E0800U) /**< \brief (UART1     ) Base Address */
#define EFC        ((Efc    *)0x400E0A00U) /**< \brief (EFC       ) Base Address */
#define PIOA       ((Pio    *)0x400E0E00U) /**< \brief (PIOA      ) Base Address */
#define PIOB       ((Pio    *)0x400E1000U) /**< \brief (PIOB      ) Base Address */
#define PIOC       ((Pio    *)0x400E1200U) /**< \brief (PIOC      ) Base Address */
#define RSTC       ((Rstc   *)0x400E1400U) /**< \brief (RSTC      ) Base Address */
#define SUPC       ((Supc   *)0x400E1410U) /**< \brief (SUPC      ) Base Address */
#define RTT        ((Rtt    *)0x400E1430U) /**< \brief (RTT       ) Base Address */
#define WDT        ((Wdt    *)0x400E1450U) /**< \brief (WDT       ) Base Address */
#define RTC        ((Rtc    *)0x400E1460U) /**< \brief (RTC       ) Base Address */
#define GPBR       ((Gpbr   *)0x400E1490U) /**< \brief (GPBR      ) Base Address */
#endif /* __ASSEMBLY__ */
/*@}*/

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAM3N1C */
/* ************************************************************************** */
/** \addtogroup SAM3N1C_pio Peripheral Pio Definitions */
/*@{*/

#include "pio/sam3n1c.h"
/*@}*/

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAM3N1C */
/* ************************************************************************** */

#define IFLASH_SIZE             (0x10000u)
#define IFLASH_PAGE_SIZE        (256u)
#define IFLASH_LOCK_REGION_SIZE (16384u)
#define IFLASH_NB_OF_PAGES      (256u)
#define IFLASH_NB_OF_LOCK_BITS  (4u)
#define IRAM_SIZE               (0x2000u)

#define IFLASH_ADDR (0x00400000u) /**< Internal Flash base address */
#define IROM_ADDR   (0x00800000u) /**< Internal ROM base address */
#define IRAM_ADDR   (0x20000000u) /**< Internal RAM base address */

#ifdef __cplusplus
}
#endif

/*@}*/

#endif /* _SAM3N1C_ */
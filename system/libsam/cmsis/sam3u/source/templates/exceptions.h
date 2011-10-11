/*! \file *********************************************************************
 *
 * \brief This file contains the interface for default exception handlers.
 *
 * $asf_license$
 *
 * \par Purpose
 *
 * This file provides basic support for Cortex-M processor based
 * microcontrollers.
 *
 * \author               Atmel Corporation: http://www.atmel.com \n
 *                       Support and FAQ: http://support.atmel.no/
 *
 ******************************************************************************/

#ifndef EXCEPTIONS_H_INCLUDED
#define EXCEPTIONS_H_INCLUDED

/* @cond 0 */
/**INDENT-OFF**/
#ifdef __cplusplus
extern "C" {
#endif
/**INDENT-ON**/
/* @endcond */

/* Function prototype for exception table items (interrupt handler). */
typedef void( *IntFunc )( void ) ;

/* Default empty handler */
extern void Dummy_Handler( void ) ;

/* Cortex-M3 core handlers */
extern void Reset_Handler( void ) ;
extern void NMI_Handler( void ) ;
extern void HardFault_Handler( void ) ;
extern void MemManage_Handler( void ) ;
extern void BusFault_Handler( void ) ;
extern void UsageFault_Handler( void ) ;
extern void SVC_Handler( void ) ;
extern void DebugMon_Handler( void ) ;
extern void PendSV_Handler( void ) ;
extern void SysTick_Handler( void ) ;

/* Peripherals handlers */
extern void SUPC_IrqHandler( void ) ;
extern void RSTC_IrqHandler( void ) ;
extern void RTC_IrqHandler( void ) ;
extern void RTT_IrqHandler( void ) ;
extern void WDT_IrqHandler( void ) ;
extern void PMC_IrqHandler( void ) ;
extern void EFC0_IrqHandler( void ) ;
extern void EFC1_IrqHandler( void ) ;
extern void UART_IrqHandler( void ) ;
extern void SMC_IrqHandler( void ) ;
extern void PIOA_IrqHandler( void ) ;
extern void PIOB_IrqHandler( void ) ;
extern void PIOC_IrqHandler( void ) ;
extern void USART0_IrqHandler( void ) ;
extern void USART1_IrqHandler( void ) ;
extern void USART2_IrqHandler( void ) ;
extern void USART3_IrqHandler( void ) ;
extern void MCI_IrqHandler( void ) ;
extern void TWI0_IrqHandler( void ) ;
extern void TWI1_IrqHandler( void ) ;
extern void SPI_IrqHandler( void ) ;
extern void SSC_IrqHandler( void ) ;
extern void TC0_IrqHandler( void ) ;
extern void TC1_IrqHandler( void ) ;
extern void TC2_IrqHandler( void ) ;
extern void PWM_IrqHandler( void ) ;
extern void ADC12B_IrqHandler( void ) ;
extern void ADC_IrqHandler( void ) ;
extern void DMAC_IrqHandler( void ) ;
extern void UDPHS_IrqHandler( void ) ;

/* @cond 0 */
/**INDENT-OFF**/
#ifdef __cplusplus
}
#endif
/**INDENT-ON**/
/* @endcond */

#endif /* EXCEPTIONS_H_INCLUDED */


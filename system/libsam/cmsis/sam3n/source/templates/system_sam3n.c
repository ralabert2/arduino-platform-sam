/*! \file *********************************************************************
 *
 * \brief Provides the low-level initialization functions that called
 * on chip startup.
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

#include "system_sam3n.h"
#include "sam3n.h"

/* @cond 0 */
/**INDENT-OFF**/
#ifdef __cplusplus
extern "C" {
#endif
/**INDENT-ON**/
/* @endcond */

/* Clock settings (48MHz) */
#define BOARD_OSCOUNT   (CKGR_MOR_MOSCXTST(0x8))
#define BOARD_PLLR		(CKGR_PLLR_STUCKTO1 \
                       | CKGR_PLLR_MUL(0x3) \
                       | CKGR_PLLR_PLLCOUNT(0x3f) \
                       | CKGR_PLLR_DIV(0x1))
#define BOARD_MCKR      (PMC_MCKR_PRES_CLK | PMC_MCKR_CSS_PLL_CLK)

/* Clock Definitions */
#define XTAL32      	(   32768UL)	/* 32k crystal frequency             */
#define OSC32_CLK   	(    XTAL32)	/* 32k oscillator frequency          */
#define ERC_OSC     	(   32000UL)	/* Embedded RC oscillator freqquency */
#define EFRC_OSC    	( 4000000UL)	/* Embedded fast RC oscillator freq  */
#define MAINCK_XTAL_HZ	(12000000UL)	/* External crystal frequency */
#define MCK_HZ			(48000000UL)	/* Processor frequency */

/* FIXME: should be generated by sock */
uint32_t SystemCoreClock = EFRC_OSC;

/**
 * \brief Setup the microcontroller system.
 * Initialize the System and update the SystemFrequency variable.
 */
extern void SystemInit( void )
{
    /* Set 3 FWS for Embedded Flash Access */
    EFC->EEFC_FMR = EEFC_FMR_FWS(3);

    /* Initialize main oscillator */
    if ( !(PMC->CKGR_MOR & CKGR_MOR_MOSCSEL) )
    {
        PMC->CKGR_MOR = CKGR_MOR_KEY(0x37) | BOARD_OSCOUNT | CKGR_MOR_MOSCRCEN | CKGR_MOR_MOSCXTEN;
        while (!(PMC->PMC_SR & PMC_SR_MOSCXTS));
    }

    /* Switch to 3-20MHz Xtal oscillator */
    PMC->CKGR_MOR = CKGR_MOR_KEY(0x37) | BOARD_OSCOUNT | CKGR_MOR_MOSCRCEN | CKGR_MOR_MOSCXTEN | CKGR_MOR_MOSCSEL;

    while (!(PMC->PMC_SR & PMC_SR_MOSCSELS));
    PMC->PMC_MCKR = (PMC->PMC_MCKR & ~(uint32_t)PMC_MCKR_CSS_Msk) | PMC_MCKR_CSS_MAIN_CLK;
    while (!(PMC->PMC_SR & PMC_SR_MCKRDY));

    /* Initialize PLL */
    PMC->CKGR_PLLR = BOARD_PLLR;
    while (!(PMC->PMC_SR & PMC_SR_LOCK));

    /* Switch to main clock */
    PMC->PMC_MCKR = (BOARD_MCKR & ~PMC_MCKR_CSS_Msk) | PMC_MCKR_CSS_MAIN_CLK;
    while (!(PMC->PMC_SR & PMC_SR_MCKRDY));

    /* Switch to PLLA */
    PMC->PMC_MCKR = BOARD_MCKR ;
    while (!(PMC->PMC_SR & PMC_SR_MCKRDY));

	SystemCoreClock = MCK_HZ;
}

extern void SystemCoreClockUpdate( void )
{
	/* Determine clock frequency according to clock register values */
	switch (PMC->PMC_MCKR & PMC_MCKR_CSS_Msk) {
	case PMC_MCKR_CSS_SLOW_CLK:                             /* Slow clock */
		if (SUPC->SUPC_SR & SUPC_SR_OSCSEL) {
			SystemCoreClock = OSC32_CLK;
        }
		else {
			SystemCoreClock = ERC_OSC;
        }
		break;
	case PMC_MCKR_CSS_MAIN_CLK:                             /* Main clock */
		if (PMC->CKGR_MOR & CKGR_MOR_MOSCSEL) {
			SystemCoreClock = MAINCK_XTAL_HZ;
        }
		else {
			SystemCoreClock = EFRC_OSC;

			switch (PMC->CKGR_MOR & CKGR_MOR_MOSCRCF_Msk) {
			case CKGR_MOR_MOSCRCF_4MHZ:
				break;
			case CKGR_MOR_MOSCRCF_8MHZ:
				SystemCoreClock *= 2;
				break;
			case CKGR_MOR_MOSCRCF_12MHZ:
				SystemCoreClock *= 3;
				break;
			case 3:
				break;
			}
		}
		break;
	case PMC_MCKR_CSS_PLL_CLK:                             /* PLL clock */
		if (PMC->CKGR_MOR & CKGR_MOR_MOSCSEL) {
			SystemCoreClock = MAINCK_XTAL_HZ;
        }
		else {
			SystemCoreClock = EFRC_OSC;

			switch (PMC->CKGR_MOR & CKGR_MOR_MOSCRCF_Msk) {
			case CKGR_MOR_MOSCRCF_4MHZ:
				break;
			case CKGR_MOR_MOSCRCF_8MHZ:
				SystemCoreClock *= 2;
				break;
			case CKGR_MOR_MOSCRCF_12MHZ:
				SystemCoreClock *= 3;
				break;
			case 3:
				break;
			}
		}
		SystemCoreClock *= ((((PMC->CKGR_PLLR) >> CKGR_PLLR_MUL_Pos) & 0x7FF) + 1);
		SystemCoreClock /= ((((PMC->CKGR_PLLR) >> CKGR_PLLR_DIV_Pos) & 0x0FF));
		break;
	}

	if ((PMC->PMC_MCKR & PMC_MCKR_PRES_Msk) == PMC_MCKR_PRES_CLK_3) {
		SystemCoreClock /= 3;
    }
	else {
		SystemCoreClock >>= ((PMC->PMC_MCKR & PMC_MCKR_PRES_Msk) >> PMC_MCKR_PRES_Pos);
    }
}

/* @cond 0 */
/**INDENT-OFF**/
#ifdef __cplusplus
}
#endif
/**INDENT-ON**/
/* @endcond */


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

#include "sam3.h"

/* @cond 0 */
/**INDENT-OFF**/
#ifdef __cplusplus
extern "C" {
#endif
/**INDENT-ON**/
/* @endcond */

/* Clock Settings (64MHz) */
#define BOARD_OSCOUNT   (CKGR_MOR_MOSCXTST(0x8U))
#define BOARD_PLLAR     (CKGR_PLLAR_STUCKTO1 \
                       | CKGR_PLLAR_MULA(0xfU) \
                       | CKGR_PLLAR_PLLACOUNT(0x3fU) \
                       | CKGR_PLLAR_DIVA(0x3U))
#define BOARD_MCKR      (PMC_MCKR_PRES_CLK | PMC_MCKR_CSS_PLLA_CLK)

/* Clock Definitions */
#define XTAL32			(   32768UL)	/* 32k crystal frequency             */
#define OSC32_CLK		(    XTAL32)	/* 32k oscillator frequency          */
#define ERC_OSC			(   32000UL)	/* Embedded RC oscillator freqquency */
#define EFRC_OSC		( 4000000UL)	/* Embedded fast RC oscillator freq  */
#define MAINCK_XTAL_HZ	(12000000UL)	/* External crystal frequency */
#define MCK_HZ			(64000000UL)	/* Processor frequency */

/* FIXME: should be generated by sock */
uint32_t SystemCoreClock = EFRC_OSC;

/**
 * \brief Setup the microcontroller system.
 * Initialize the System and update the SystemFrequency variable.
 */
extern void SystemInit( void )
{
    /* Set 3 FWS for Embedded Flash Access */
    EFC->EEFC_FMR = EEFC_FMR_FWS(3U);

    /* Initialize main oscillator */
    if ( !(PMC->CKGR_MOR & CKGR_MOR_MOSCSEL) )
    {
        PMC->CKGR_MOR = CKGR_MOR_KEY(0x37U) | BOARD_OSCOUNT | CKGR_MOR_MOSCRCEN | CKGR_MOR_MOSCXTEN;
        while (!(PMC->PMC_SR & PMC_SR_MOSCXTS)) {}
    }

    /* Switch to 3-20MHz Xtal oscillator */
    PMC->CKGR_MOR = CKGR_MOR_KEY(0x37U) | BOARD_OSCOUNT | CKGR_MOR_MOSCRCEN | CKGR_MOR_MOSCXTEN | CKGR_MOR_MOSCSEL;

    while (!(PMC->PMC_SR & PMC_SR_MOSCSELS)) {}
    PMC->PMC_MCKR = (PMC->PMC_MCKR & ~(uint32_t)PMC_MCKR_CSS_Msk) | PMC_MCKR_CSS_MAIN_CLK;
    while (!(PMC->PMC_SR & PMC_SR_MCKRDY)) {}

    /* Initialize PLLA */
    PMC->CKGR_PLLAR = BOARD_PLLAR;
    while (!(PMC->PMC_SR & PMC_SR_LOCKA)) {}

    /* Switch to main clock */
    PMC->PMC_MCKR = (BOARD_MCKR & ~PMC_MCKR_CSS_Msk) | PMC_MCKR_CSS_MAIN_CLK;
    while (!(PMC->PMC_SR & PMC_SR_MCKRDY)) {}

    /* Switch to PLLA */
    PMC->PMC_MCKR = BOARD_MCKR ;
    while (!(PMC->PMC_SR & PMC_SR_MCKRDY)) {}

	SystemCoreClock = MCK_HZ;
}

extern void SystemCoreClockUpdate( void )
{
	/* Determine clock frequency according to clock register values */
	switch (PMC->PMC_MCKR & (uint32_t)PMC_MCKR_CSS_Msk) {
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
			case CKGR_MOR_MOSCRCF_4MHz:
				break;
			case CKGR_MOR_MOSCRCF_8MHz:
				SystemCoreClock *= 2U;
				break;
			case CKGR_MOR_MOSCRCF_12MHz:
				SystemCoreClock *= 3U;
				break;
			default:
				break;
			}
		}
		break;
	case PMC_MCKR_CSS_PLLA_CLK:                             /* PLLA clock */
	case PMC_MCKR_CSS_PLLB_CLK:                             /* PLLB clock */
		if (PMC->CKGR_MOR & CKGR_MOR_MOSCSEL) {
			SystemCoreClock = MAINCK_XTAL_HZ;
		}
		else {
			SystemCoreClock = EFRC_OSC;

			switch (PMC->CKGR_MOR & CKGR_MOR_MOSCRCF_Msk) {
			case CKGR_MOR_MOSCRCF_4MHz:
				break;
			case CKGR_MOR_MOSCRCF_8MHz:
				SystemCoreClock *= 2U;
				break;
			case CKGR_MOR_MOSCRCF_12MHz:
				SystemCoreClock *= 3U;
				break;
			default:
				break;
			}
		}
		if ((uint32_t)(PMC->PMC_MCKR & (uint32_t)PMC_MCKR_CSS_Msk) == PMC_MCKR_CSS_PLLA_CLK) {
			SystemCoreClock *= ((((PMC->CKGR_PLLAR) >> CKGR_PLLAR_MULA_Pos) & 0x7FFU) + 1U);
			SystemCoreClock /= ((((PMC->CKGR_PLLAR) >> CKGR_PLLAR_DIVA_Pos) & 0x0FFU));
		}
		else {
			SystemCoreClock *= ((((PMC->CKGR_PLLBR) >> CKGR_PLLBR_MULB_Pos) & 0x7FFU) + 1U);
			SystemCoreClock /= ((((PMC->CKGR_PLLBR) >> CKGR_PLLBR_DIVB_Pos) & 0x0FFU));
		}
		break;
	default:
		break;
	}

	if ((PMC->PMC_MCKR & PMC_MCKR_PRES_Msk) == PMC_MCKR_PRES_CLK_3) {
		SystemCoreClock /= 3U;
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

/* $asf_license$ */

#ifndef _SAM3N_PMC_INSTANCE_
#define _SAM3N_PMC_INSTANCE_

/* ========== Register definition for PMC peripheral ========== */
#ifdef __ASSEMBLY__
#define REG_PMC_SCER            (0x400E0400U) /**< \brief (PMC) System Clock Enable Register */
#define REG_PMC_SCDR            (0x400E0404U) /**< \brief (PMC) System Clock Disable Register */
#define REG_PMC_SCSR            (0x400E0408U) /**< \brief (PMC) System Clock Status Register */
#define REG_PMC_PCER            (0x400E0410U) /**< \brief (PMC) Peripheral Clock Enable Register */
#define REG_PMC_PCDR            (0x400E0414U) /**< \brief (PMC) Peripheral Clock Disable Register */
#define REG_PMC_PCSR            (0x400E0418U) /**< \brief (PMC) Peripheral Clock Status Register */
#define REG_CKGR_MOR            (0x400E0420U) /**< \brief (PMC) Main Oscillator Register */
#define REG_CKGR_MCFR           (0x400E0424U) /**< \brief (PMC) Main Clock Frequency Register */
#define REG_CKGR_PLLR           (0x400E0428U) /**< \brief (PMC) PLL Register */
#define REG_PMC_MCKR            (0x400E0430U) /**< \brief (PMC) Master Clock Register */
#define REG_PMC_PCK             (0x400E0440U) /**< \brief (PMC) Programmable Clock 0 Register */
#define REG_PMC_IER             (0x400E0460U) /**< \brief (PMC) Interrupt Enable Register */
#define REG_PMC_IDR             (0x400E0464U) /**< \brief (PMC) Interrupt Disable Register */
#define REG_PMC_SR              (0x400E0468U) /**< \brief (PMC) Status Register */
#define REG_PMC_IMR             (0x400E046CU) /**< \brief (PMC) Interrupt Mask Register */
#define REG_PMC_FSMR            (0x400E0470U) /**< \brief (PMC) Fast Startup Mode Register */
#define REG_PMC_FSPR            (0x400E0474U) /**< \brief (PMC) Fast Startup Polarity Register */
#define REG_PMC_FOCR            (0x400E0478U) /**< \brief (PMC) Fault Output Clear Register */
#define REG_PMC_WPMR            (0x400E04E4U) /**< \brief (PMC) Write Protect Mode Register */
#define REG_PMC_WPSR            (0x400E04E8U) /**< \brief (PMC) Write Protect Status Register */
#define REG_PMC_OCR             (0x400E0510U) /**< \brief (PMC) Oscillator Calibration Register */
#else
#define REG_PMC_SCER   (*(WoReg*)0x400E0400U) /**< \brief (PMC) System Clock Enable Register */
#define REG_PMC_SCDR   (*(WoReg*)0x400E0404U) /**< \brief (PMC) System Clock Disable Register */
#define REG_PMC_SCSR   (*(RoReg*)0x400E0408U) /**< \brief (PMC) System Clock Status Register */
#define REG_PMC_PCER   (*(WoReg*)0x400E0410U) /**< \brief (PMC) Peripheral Clock Enable Register */
#define REG_PMC_PCDR   (*(WoReg*)0x400E0414U) /**< \brief (PMC) Peripheral Clock Disable Register */
#define REG_PMC_PCSR   (*(RoReg*)0x400E0418U) /**< \brief (PMC) Peripheral Clock Status Register */
#define REG_CKGR_MOR   (*(RwReg*)0x400E0420U) /**< \brief (PMC) Main Oscillator Register */
#define REG_CKGR_MCFR  (*(RoReg*)0x400E0424U) /**< \brief (PMC) Main Clock Frequency Register */
#define REG_CKGR_PLLR  (*(RwReg*)0x400E0428U) /**< \brief (PMC) PLL Register */
#define REG_PMC_MCKR   (*(RwReg*)0x400E0430U) /**< \brief (PMC) Master Clock Register */
#define REG_PMC_PCK    (*(RwReg*)0x400E0440U) /**< \brief (PMC) Programmable Clock 0 Register */
#define REG_PMC_IER    (*(WoReg*)0x400E0460U) /**< \brief (PMC) Interrupt Enable Register */
#define REG_PMC_IDR    (*(WoReg*)0x400E0464U) /**< \brief (PMC) Interrupt Disable Register */
#define REG_PMC_SR     (*(RoReg*)0x400E0468U) /**< \brief (PMC) Status Register */
#define REG_PMC_IMR    (*(RoReg*)0x400E046CU) /**< \brief (PMC) Interrupt Mask Register */
#define REG_PMC_FSMR   (*(RwReg*)0x400E0470U) /**< \brief (PMC) Fast Startup Mode Register */
#define REG_PMC_FSPR   (*(RwReg*)0x400E0474U) /**< \brief (PMC) Fast Startup Polarity Register */
#define REG_PMC_FOCR   (*(WoReg*)0x400E0478U) /**< \brief (PMC) Fault Output Clear Register */
#define REG_PMC_WPMR   (*(RwReg*)0x400E04E4U) /**< \brief (PMC) Write Protect Mode Register */
#define REG_PMC_WPSR   (*(RoReg*)0x400E04E8U) /**< \brief (PMC) Write Protect Status Register */
#define REG_PMC_OCR    (*(RwReg*)0x400E0510U) /**< \brief (PMC) Oscillator Calibration Register */
#endif /* __ASSEMBLY__ */

#endif /* _SAM3N_PMC_INSTANCE_ */
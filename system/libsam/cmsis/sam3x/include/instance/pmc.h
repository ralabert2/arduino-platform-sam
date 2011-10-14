/* $asf_license$ */

#ifndef _SAM3XA_PMC_INSTANCE_
#define _SAM3XA_PMC_INSTANCE_

/* ========== Register definition for PMC peripheral ========== */
#ifdef __ASSEMBLY__
#define REG_PMC_SCER            (0x400E0600U) /**< \brief (PMC) System Clock Enable Register */
#define REG_PMC_SCDR            (0x400E0604U) /**< \brief (PMC) System Clock Disable Register */
#define REG_PMC_SCSR            (0x400E0608U) /**< \brief (PMC) System Clock Status Register */
#define REG_PMC_PCER0           (0x400E0610U) /**< \brief (PMC) Peripheral Clock Enable Register 0 */
#define REG_PMC_PCDR0           (0x400E0614U) /**< \brief (PMC) Peripheral Clock Disable Register 0 */
#define REG_PMC_PCSR0           (0x400E0618U) /**< \brief (PMC) Peripheral Clock Status Register 0 */
#define REG_CKGR_UCKR           (0x400E061CU) /**< \brief (PMC) UTMI Clock Register */
#define REG_CKGR_MOR            (0x400E0620U) /**< \brief (PMC) Main Oscillator Register */
#define REG_CKGR_MCFR           (0x400E0624U) /**< \brief (PMC) Main Clock Frequency Register */
#define REG_CKGR_PLLAR          (0x400E0628U) /**< \brief (PMC) PLLA Register */
#define REG_PMC_MCKR            (0x400E0630U) /**< \brief (PMC) Master Clock Register */
#define REG_PMC_USB             (0x400E0638U) /**< \brief (PMC) USB Clock Register */
#define REG_PMC_PCK             (0x400E0640U) /**< \brief (PMC) Programmable Clock 0 Register */
#define REG_PMC_IER             (0x400E0660U) /**< \brief (PMC) Interrupt Enable Register */
#define REG_PMC_IDR             (0x400E0664U) /**< \brief (PMC) Interrupt Disable Register */
#define REG_PMC_SR              (0x400E0668U) /**< \brief (PMC) Status Register */
#define REG_PMC_IMR             (0x400E066CU) /**< \brief (PMC) Interrupt Mask Register */
#define REG_PMC_FSMR            (0x400E0670U) /**< \brief (PMC) Fast Startup Mode Register */
#define REG_PMC_FSPR            (0x400E0674U) /**< \brief (PMC) Fast Startup Polarity Register */
#define REG_PMC_FOCR            (0x400E0678U) /**< \brief (PMC) Fault Output Clear Register */
#define REG_PMC_WPMR            (0x400E06E4U) /**< \brief (PMC) Write Protect Mode Register */
#define REG_PMC_WPSR            (0x400E06E8U) /**< \brief (PMC) Write Protect Status Register */
#define REG_PMC_PCER1           (0x400E0700U) /**< \brief (PMC) Peripheral Clock Enable Register 1 */
#define REG_PMC_PCDR1           (0x400E0704U) /**< \brief (PMC) Peripheral Clock Disable Register 1 */
#define REG_PMC_PCSR1           (0x400E0708U) /**< \brief (PMC) Peripheral Clock Status Register 1 */
#define REG_PMC_PCR             (0x400E070CU) /**< \brief (PMC) Peripheral Control Register */
#else
#define REG_PMC_SCER   (*(WoReg*)0x400E0600U) /**< \brief (PMC) System Clock Enable Register */
#define REG_PMC_SCDR   (*(WoReg*)0x400E0604U) /**< \brief (PMC) System Clock Disable Register */
#define REG_PMC_SCSR   (*(RoReg*)0x400E0608U) /**< \brief (PMC) System Clock Status Register */
#define REG_PMC_PCER0  (*(WoReg*)0x400E0610U) /**< \brief (PMC) Peripheral Clock Enable Register 0 */
#define REG_PMC_PCDR0  (*(WoReg*)0x400E0614U) /**< \brief (PMC) Peripheral Clock Disable Register 0 */
#define REG_PMC_PCSR0  (*(RoReg*)0x400E0618U) /**< \brief (PMC) Peripheral Clock Status Register 0 */
#define REG_CKGR_UCKR  (*(RwReg*)0x400E061CU) /**< \brief (PMC) UTMI Clock Register */
#define REG_CKGR_MOR   (*(RwReg*)0x400E0620U) /**< \brief (PMC) Main Oscillator Register */
#define REG_CKGR_MCFR  (*(RoReg*)0x400E0624U) /**< \brief (PMC) Main Clock Frequency Register */
#define REG_CKGR_PLLAR (*(RwReg*)0x400E0628U) /**< \brief (PMC) PLLA Register */
#define REG_PMC_MCKR   (*(RwReg*)0x400E0630U) /**< \brief (PMC) Master Clock Register */
#define REG_PMC_USB    (*(RwReg*)0x400E0638U) /**< \brief (PMC) USB Clock Register */
#define REG_PMC_PCK    (*(RwReg*)0x400E0640U) /**< \brief (PMC) Programmable Clock 0 Register */
#define REG_PMC_IER    (*(WoReg*)0x400E0660U) /**< \brief (PMC) Interrupt Enable Register */
#define REG_PMC_IDR    (*(WoReg*)0x400E0664U) /**< \brief (PMC) Interrupt Disable Register */
#define REG_PMC_SR     (*(RoReg*)0x400E0668U) /**< \brief (PMC) Status Register */
#define REG_PMC_IMR    (*(RoReg*)0x400E066CU) /**< \brief (PMC) Interrupt Mask Register */
#define REG_PMC_FSMR   (*(RwReg*)0x400E0670U) /**< \brief (PMC) Fast Startup Mode Register */
#define REG_PMC_FSPR   (*(RwReg*)0x400E0674U) /**< \brief (PMC) Fast Startup Polarity Register */
#define REG_PMC_FOCR   (*(WoReg*)0x400E0678U) /**< \brief (PMC) Fault Output Clear Register */
#define REG_PMC_WPMR   (*(RwReg*)0x400E06E4U) /**< \brief (PMC) Write Protect Mode Register */
#define REG_PMC_WPSR   (*(RoReg*)0x400E06E8U) /**< \brief (PMC) Write Protect Status Register */
#define REG_PMC_PCER1  (*(WoReg*)0x400E0700U) /**< \brief (PMC) Peripheral Clock Enable Register 1 */
#define REG_PMC_PCDR1  (*(WoReg*)0x400E0704U) /**< \brief (PMC) Peripheral Clock Disable Register 1 */
#define REG_PMC_PCSR1  (*(RoReg*)0x400E0708U) /**< \brief (PMC) Peripheral Clock Status Register 1 */
#define REG_PMC_PCR    (*(RwReg*)0x400E070CU) /**< \brief (PMC) Peripheral Control Register */
#endif /* __ASSEMBLY__ */

#endif /* _SAM3XA_PMC_INSTANCE_ */
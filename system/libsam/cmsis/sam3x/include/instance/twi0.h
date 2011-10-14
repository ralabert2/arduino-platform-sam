/* $asf_license$ */

#ifndef _SAM3XA_TWI0_INSTANCE_
#define _SAM3XA_TWI0_INSTANCE_

/* ========== Register definition for TWI0 peripheral ========== */
#ifdef __ASSEMBLY__
#define REG_TWI0_CR            (0x4008C000U) /**< \brief (TWI0) Control Register */
#define REG_TWI0_MMR           (0x4008C004U) /**< \brief (TWI0) Master Mode Register */
#define REG_TWI0_SMR           (0x4008C008U) /**< \brief (TWI0) Slave Mode Register */
#define REG_TWI0_IADR          (0x4008C00CU) /**< \brief (TWI0) Internal Address Register */
#define REG_TWI0_CWGR          (0x4008C010U) /**< \brief (TWI0) Clock Waveform Generator Register */
#define REG_TWI0_SR            (0x4008C020U) /**< \brief (TWI0) Status Register */
#define REG_TWI0_IER           (0x4008C024U) /**< \brief (TWI0) Interrupt Enable Register */
#define REG_TWI0_IDR           (0x4008C028U) /**< \brief (TWI0) Interrupt Disable Register */
#define REG_TWI0_IMR           (0x4008C02CU) /**< \brief (TWI0) Interrupt Mask Register */
#define REG_TWI0_RHR           (0x4008C030U) /**< \brief (TWI0) Receive Holding Register */
#define REG_TWI0_THR           (0x4008C034U) /**< \brief (TWI0) Transmit Holding Register */
#define REG_TWI0_RPR           (0x4008C100U) /**< \brief (TWI0) Receive Pointer Register */
#define REG_TWI0_RCR           (0x4008C104U) /**< \brief (TWI0) Receive Counter Register */
#define REG_TWI0_TPR           (0x4008C108U) /**< \brief (TWI0) Transmit Pointer Register */
#define REG_TWI0_TCR           (0x4008C10CU) /**< \brief (TWI0) Transmit Counter Register */
#define REG_TWI0_RNPR          (0x4008C110U) /**< \brief (TWI0) Receive Next Pointer Register */
#define REG_TWI0_RNCR          (0x4008C114U) /**< \brief (TWI0) Receive Next Counter Register */
#define REG_TWI0_TNPR          (0x4008C118U) /**< \brief (TWI0) Transmit Next Pointer Register */
#define REG_TWI0_TNCR          (0x4008C11CU) /**< \brief (TWI0) Transmit Next Counter Register */
#define REG_TWI0_PTCR          (0x4008C120U) /**< \brief (TWI0) Transfer Control Register */
#define REG_TWI0_PTSR          (0x4008C124U) /**< \brief (TWI0) Transfer Status Register */
#else
#define REG_TWI0_CR   (*(WoReg*)0x4008C000U) /**< \brief (TWI0) Control Register */
#define REG_TWI0_MMR  (*(RwReg*)0x4008C004U) /**< \brief (TWI0) Master Mode Register */
#define REG_TWI0_SMR  (*(RwReg*)0x4008C008U) /**< \brief (TWI0) Slave Mode Register */
#define REG_TWI0_IADR (*(RwReg*)0x4008C00CU) /**< \brief (TWI0) Internal Address Register */
#define REG_TWI0_CWGR (*(RwReg*)0x4008C010U) /**< \brief (TWI0) Clock Waveform Generator Register */
#define REG_TWI0_SR   (*(RoReg*)0x4008C020U) /**< \brief (TWI0) Status Register */
#define REG_TWI0_IER  (*(WoReg*)0x4008C024U) /**< \brief (TWI0) Interrupt Enable Register */
#define REG_TWI0_IDR  (*(WoReg*)0x4008C028U) /**< \brief (TWI0) Interrupt Disable Register */
#define REG_TWI0_IMR  (*(RoReg*)0x4008C02CU) /**< \brief (TWI0) Interrupt Mask Register */
#define REG_TWI0_RHR  (*(RoReg*)0x4008C030U) /**< \brief (TWI0) Receive Holding Register */
#define REG_TWI0_THR  (*(WoReg*)0x4008C034U) /**< \brief (TWI0) Transmit Holding Register */
#define REG_TWI0_RPR  (*(RwReg*)0x4008C100U) /**< \brief (TWI0) Receive Pointer Register */
#define REG_TWI0_RCR  (*(RwReg*)0x4008C104U) /**< \brief (TWI0) Receive Counter Register */
#define REG_TWI0_TPR  (*(RwReg*)0x4008C108U) /**< \brief (TWI0) Transmit Pointer Register */
#define REG_TWI0_TCR  (*(RwReg*)0x4008C10CU) /**< \brief (TWI0) Transmit Counter Register */
#define REG_TWI0_RNPR (*(RwReg*)0x4008C110U) /**< \brief (TWI0) Receive Next Pointer Register */
#define REG_TWI0_RNCR (*(RwReg*)0x4008C114U) /**< \brief (TWI0) Receive Next Counter Register */
#define REG_TWI0_TNPR (*(RwReg*)0x4008C118U) /**< \brief (TWI0) Transmit Next Pointer Register */
#define REG_TWI0_TNCR (*(RwReg*)0x4008C11CU) /**< \brief (TWI0) Transmit Next Counter Register */
#define REG_TWI0_PTCR (*(WoReg*)0x4008C120U) /**< \brief (TWI0) Transfer Control Register */
#define REG_TWI0_PTSR (*(RoReg*)0x4008C124U) /**< \brief (TWI0) Transfer Status Register */
#endif /* __ASSEMBLY__ */

#endif /* _SAM3XA_TWI0_INSTANCE_ */
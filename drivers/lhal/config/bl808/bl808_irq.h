#ifndef __BL808_IRQ_H
#define __BL808_IRQ_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

#define BL808_IRQ_NUM_BASE 16

#define BL808_IRQ_SSOFT          1
#define BL808_IRQ_MSOFT          3
#define BL808_IRQ_STIME          5
#define BL808_IRQ_MTIME          7
#define BL808_IRQ_SEXT           9
#define BL808_IRQ_MEXT           11
#define BL808_IRQ_CLIC_SOFT_PEND 12
#if (__riscv_xlen == 64)
#define BL808_IRQ_HPM_OVF 17
#endif

#if defined(CPU_M0) || defined(CPU_LP)
#define BL808_IRQ_BMX_MCU_BUS_ERR                   (BL808_IRQ_NUM_BASE + 0)
#define BL808_IRQ_BMX_MCU_TO                        (BL808_IRQ_NUM_BASE + 1)
#define BL808_IRQ_M0_RESERVED2                      (BL808_IRQ_NUM_BASE + 2)
#define BL808_IRQ_IPC_M0                            (BL808_IRQ_NUM_BASE + 3)
#define BL808_IRQ_AUDIO                             (BL808_IRQ_NUM_BASE + 4)
#define BL808_IRQ_RF_TOP_INT0                       (BL808_IRQ_NUM_BASE + 5)
#define BL808_IRQ_RF_TOP_INT1                       (BL808_IRQ_NUM_BASE + 6)
#define BL808_IRQ_LZ4D                              (BL808_IRQ_NUM_BASE + 7)
#define BL808_IRQ_GAUGE_ITF                         (BL808_IRQ_NUM_BASE + 8)
#define BL808_IRQ_SEC_ENG_ID1_SHA_AES_TRNG_PKA_GMAC (BL808_IRQ_NUM_BASE + 9)
#define BL808_IRQ_SEC_ENG_ID0_SHA_AES_TRNG_PKA_GMAC (BL808_IRQ_NUM_BASE + 10)
#define BL808_IRQ_SEC_ENG_ID1_CDET                  (BL808_IRQ_NUM_BASE + 11)
#define BL808_IRQ_SEC_ENG_ID0_CDET                  (BL808_IRQ_NUM_BASE + 12)
#define BL808_IRQ_SF_CTRL_ID1                       (BL808_IRQ_NUM_BASE + 13)
#define BL808_IRQ_SF_CTRL_ID0                       (BL808_IRQ_NUM_BASE + 14)
#define BL808_IRQ_DMA0_ALL                          (BL808_IRQ_NUM_BASE + 15)
#define BL808_IRQ_DMA1_ALL                          (BL808_IRQ_NUM_BASE + 16)
#define BL808_IRQ_SDH                               (BL808_IRQ_NUM_BASE + 17)
#define BL808_IRQ_MM_ALL                            (BL808_IRQ_NUM_BASE + 18)
#define BL808_IRQ_IRTX                              (BL808_IRQ_NUM_BASE + 19)
#define BL808_IRQ_IRRX                              (BL808_IRQ_NUM_BASE + 20)
#define BL808_IRQ_USB                               (BL808_IRQ_NUM_BASE + 21)
#define BL808_IRQ_AUPDM_TOUCH                       (BL808_IRQ_NUM_BASE + 22)
#define BL808_IRQ_M0_RESERVED23                     (BL808_IRQ_NUM_BASE + 23)
#define BL808_IRQ_EMAC                              (BL808_IRQ_NUM_BASE + 24)
#define BL808_IRQ_GPADC_DMA                         (BL808_IRQ_NUM_BASE + 25)
#define BL808_IRQ_EFUSE                             (BL808_IRQ_NUM_BASE + 26)
#define BL808_IRQ_SPI0                              (BL808_IRQ_NUM_BASE + 27)
#define BL808_IRQ_UART0                             (BL808_IRQ_NUM_BASE + 28)
#define BL808_IRQ_UART1                             (BL808_IRQ_NUM_BASE + 29)
#define BL808_IRQ_UART2                             (BL808_IRQ_NUM_BASE + 30)
#define BL808_IRQ_GPIO_DMA                          (BL808_IRQ_NUM_BASE + 31)
#define BL808_IRQ_I2C0                              (BL808_IRQ_NUM_BASE + 32)
#define BL808_IRQ_PWM                               (BL808_IRQ_NUM_BASE + 33)
#define BL808_IRQ_IPC_RSVD                          (BL808_IRQ_NUM_BASE + 34)
#define BL808_IRQ_IPC_LP                            (BL808_IRQ_NUM_BASE + 35)
#define BL808_IRQ_TIMER0                            (BL808_IRQ_NUM_BASE + 36)
#define BL808_IRQ_TIMER1                            (BL808_IRQ_NUM_BASE + 37)
#define BL808_IRQ_WDT                               (BL808_IRQ_NUM_BASE + 38)
#define BL808_IRQ_I2C1                              (BL808_IRQ_NUM_BASE + 39)
#define BL808_IRQ_I2S                               (BL808_IRQ_NUM_BASE + 40)
#define BL808_IRQ_ANA_OCP_OUT_TO_CPU_0              (BL808_IRQ_NUM_BASE + 41)
#define BL808_IRQ_ANA_OCP_OUT_TO_CPU_1              (BL808_IRQ_NUM_BASE + 42)
#define BL808_IRQ_ANA_OCP_OUT_TO_CPU_2              (BL808_IRQ_NUM_BASE + 43)
#define BL808_IRQ_GPIO_INT0                         (BL808_IRQ_NUM_BASE + 44)
#define BL808_IRQ_DM                                (BL808_IRQ_NUM_BASE + 45)
#define BL808_IRQ_BT                                (BL808_IRQ_NUM_BASE + 46)
#define BL808_IRQ_M154_REQ_ACK                      (BL808_IRQ_NUM_BASE + 47)
#define BL808_IRQ_M154                              (BL808_IRQ_NUM_BASE + 48)
#define BL808_IRQ_M154_AES                          (BL808_IRQ_NUM_BASE + 49)
#define BL808_IRQ_PDS_WAKEUP                        (BL808_IRQ_NUM_BASE + 50)
#define BL808_IRQ_HBN_OUT0                          (BL808_IRQ_NUM_BASE + 51)
#define BL808_IRQ_HBN_OUT1                          (BL808_IRQ_NUM_BASE + 52)
#define BL808_IRQ_BOD                               (BL808_IRQ_NUM_BASE + 53)
#define BL808_IRQ_WIFI                              (BL808_IRQ_NUM_BASE + 54)
#define BL808_IRQ_BZ_PHY_INT                        (BL808_IRQ_NUM_BASE + 55)
#define BL808_IRQ_BLE                               (BL808_IRQ_NUM_BASE + 56)
#define BL808_IRQ_MAC_INT_TIMER                     (BL808_IRQ_NUM_BASE + 57)
#define BL808_IRQ_MAC_INT_MISC                      (BL808_IRQ_NUM_BASE + 58)
#define BL808_IRQ_MAC_INT_RX_TRIGGER                (BL808_IRQ_NUM_BASE + 59)
#define BL808_IRQ_MAC_INT_TX_TRIGGER                (BL808_IRQ_NUM_BASE + 60)
#define BL808_IRQ_MAC_INT_GEN                       (BL808_IRQ_NUM_BASE + 61)
#define BL808_IRQ_MAC_INT_PROT_TRIGGER              (BL808_IRQ_NUM_BASE + 62)
#define BL808_IRQ_WIFI_IPC                          (BL808_IRQ_NUM_BASE + 63)
#else
#define BL808_IRQ_BMX_DSP_BUS_ERR (BL808_IRQ_NUM_BASE + 0)
#define BL808_IRQ_D0_RESERVED1    (BL808_IRQ_NUM_BASE + 1)
#define BL808_IRQ_D0_RESERVED2    (BL808_IRQ_NUM_BASE + 2)
#define BL808_IRQ_D0_RESERVED3    (BL808_IRQ_NUM_BASE + 3)
#define BL808_IRQ_UART3           (BL808_IRQ_NUM_BASE + 4)
#define BL808_IRQ_I2C2            (BL808_IRQ_NUM_BASE + 5)
#define BL808_IRQ_I2C3            (BL808_IRQ_NUM_BASE + 6)
#define BL808_IRQ_SPI1            (BL808_IRQ_NUM_BASE + 7)
#define BL808_IRQ_D0_RESERVED4    (BL808_IRQ_NUM_BASE + 8)
#define BL808_IRQ_D0_RESERVED5    (BL808_IRQ_NUM_BASE + 9)
#define BL808_IRQ_SEOF_INT0       (BL808_IRQ_NUM_BASE + 10)
#define BL808_IRQ_SEOF_INT1       (BL808_IRQ_NUM_BASE + 11)
#define BL808_IRQ_SEOF_INT2       (BL808_IRQ_NUM_BASE + 12)
#define BL808_IRQ_DVP2BUS_INT0    (BL808_IRQ_NUM_BASE + 13)
#define BL808_IRQ_DVP2BUS_INT1    (BL808_IRQ_NUM_BASE + 14)
#define BL808_IRQ_DVP2BUS_INT2    (BL808_IRQ_NUM_BASE + 15)
#define BL808_IRQ_DVP2BUS_INT3    (BL808_IRQ_NUM_BASE + 16)
#define BL808_IRQ_H264_BS         (BL808_IRQ_NUM_BASE + 17)
#define BL808_IRQ_H264_FRAME      (BL808_IRQ_NUM_BASE + 18)
#define BL808_IRQ_H264_SEQ_DONE   (BL808_IRQ_NUM_BASE + 19)
#define BL808_IRQ_MJPEG           (BL808_IRQ_NUM_BASE + 20)
#define BL808_IRQ_H264_S_BS       (BL808_IRQ_NUM_BASE + 21)
#define BL808_IRQ_H264_S_FRAME    (BL808_IRQ_NUM_BASE + 22)
#define BL808_IRQ_H264_S_SEQ_DONE (BL808_IRQ_NUM_BASE + 23)
#define BL808_IRQ_DMA2_INT0       (BL808_IRQ_NUM_BASE + 24)
#define BL808_IRQ_DMA2_INT1       (BL808_IRQ_NUM_BASE + 25)
#define BL808_IRQ_DMA2_INT2       (BL808_IRQ_NUM_BASE + 26)
#define BL808_IRQ_DMA2_INT3       (BL808_IRQ_NUM_BASE + 27)
#define BL808_IRQ_DMA2_INT4       (BL808_IRQ_NUM_BASE + 28)
#define BL808_IRQ_DMA2_INT5       (BL808_IRQ_NUM_BASE + 29)
#define BL808_IRQ_DMA2_INT6       (BL808_IRQ_NUM_BASE + 30)
#define BL808_IRQ_DMA2_INT7       (BL808_IRQ_NUM_BASE + 31)
#define BL808_IRQ_SDH_MMC1        (BL808_IRQ_NUM_BASE + 32)
#define BL808_IRQ_SDH_MMC3        (BL808_IRQ_NUM_BASE + 33)
#define BL808_IRQ_SDH2PMU_WAKEUP1 (BL808_IRQ_NUM_BASE + 34)
#define BL808_IRQ_SDH2PMU_WAKEUP3 (BL808_IRQ_NUM_BASE + 35)
#define BL808_IRQ_EMAC2           (BL808_IRQ_NUM_BASE + 36)
#define BL808_IRQ_MIPI_CSI        (BL808_IRQ_NUM_BASE + 37)
#define BL808_IRQ_IPC_D0          (BL808_IRQ_NUM_BASE + 38)
#define BL808_IRQ_APU             (BL808_IRQ_NUM_BASE + 39)
#define BL808_IRQ_MJDEC           (BL808_IRQ_NUM_BASE + 40)
#define BL808_IRQ_DVP2BUS_INT4    (BL808_IRQ_NUM_BASE + 41)
#define BL808_IRQ_DVP2BUS_INT5    (BL808_IRQ_NUM_BASE + 42)
#define BL808_IRQ_DVP2BUS_INT6    (BL808_IRQ_NUM_BASE + 43)
#define BL808_IRQ_DVP2BUS_INT7    (BL808_IRQ_NUM_BASE + 44)
#define BL808_IRQ_DMA2D_INT0      (BL808_IRQ_NUM_BASE + 45)
#define BL808_IRQ_DMA2D_INT1      (BL808_IRQ_NUM_BASE + 46)
#define BL808_IRQ_DISPLAY         (BL808_IRQ_NUM_BASE + 47)
#define BL808_IRQ_PWM             (BL808_IRQ_NUM_BASE + 48)
#define BL808_IRQ_SEOF_INT3       (BL808_IRQ_NUM_BASE + 49)
#define BL808_IRQ_RESERVED1       (BL808_IRQ_NUM_BASE + 50)
#define BL808_IRQ_RESERVED2       (BL808_IRQ_NUM_BASE + 51)
#define BL808_IRQ_OSD             (BL808_IRQ_NUM_BASE + 52)
#define BL808_IRQ_DBI             (BL808_IRQ_NUM_BASE + 53)
#define BL808_IRQ_D0_RESERVED6    (BL808_IRQ_NUM_BASE + 54)
#define BL808_IRQ_OSDA_BUS_DRAIN  (BL808_IRQ_NUM_BASE + 55)
#define BL808_IRQ_OSDB_BUS_DRAIN  (BL808_IRQ_NUM_BASE + 56)
#define BL808_IRQ_OSD_PB          (BL808_IRQ_NUM_BASE + 57)
#define BL808_IRQ_D0_RESERVED7    (BL808_IRQ_NUM_BASE + 58)
#define BL808_IRQ_MIPI_DSI        (BL808_IRQ_NUM_BASE + 59)
#define BL808_IRQ_D0_RESERVED8    (BL808_IRQ_NUM_BASE + 60)
#define BL808_IRQ_TIMER0          (BL808_IRQ_NUM_BASE + 61)
#define BL808_IRQ_TIMER1          (BL808_IRQ_NUM_BASE + 62)
#define BL808_IRQ_WDT             (BL808_IRQ_NUM_BASE + 63)
#define BL808_IRQ_AUDIO           (BL808_IRQ_NUM_BASE + 64)
#define BL808_IRQ_WL_ALL          (BL808_IRQ_NUM_BASE + 65)
#define BL808_IRQ_PDS             (BL808_IRQ_NUM_BASE + 66)
#endif

#endif

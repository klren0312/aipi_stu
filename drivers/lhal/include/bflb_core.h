#ifndef _BFLB_CORE_H
#define _BFLB_CORE_H

#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <risc-v/csr.h>
#include <risc-v/riscv_arch.h>
#include <compiler/compiler_gcc.h>
#include <compiler/compiler_ld.h>
#include "bflb_list.h"

#if !defined(BL602) && !defined(BL702) && !defined(BL616) && !defined(BL606P) && !defined(BL808) && !defined(BL628)
#error please define a supported chip
#endif

#ifdef CONFIG_PARAM_ASSERT
#define ASSERT_PARAM(expr) ((expr) ? (void)0 : assert_func(__FILE__, __LINE__, __FUNCTION__, #expr))
void assert_func(uint8_t *file, uint32_t line, uint8_t *function, uint8_t *string);
#else
#define ASSERT_PARAM(expr) ((void)0U)
#endif

#define BFLB_DEVICE_TYPE_ADC      0
#define BFLB_DEVICE_TYPE_DAC      1
#define BFLB_DEVICE_TYPE_AUDIOADC 2
#define BFLB_DEVICE_TYPE_AUDIODAC 3
#define BFLB_DEVICE_TYPE_GPIO     4
#define BFLB_DEVICE_TYPE_UART     5
#define BFLB_DEVICE_TYPE_SPI      6
#define BFLB_DEVICE_TYPE_I2C      7
#define BFLB_DEVICE_TYPE_DMA      8
#define BFLB_DEVICE_TYPE_I2S      9
#define BFLB_DEVICE_TYPE_IR       10
#define BFLB_DEVICE_TYPE_TIMER    11
#define BFLB_DEVICE_TYPE_PWM      12
#define BFLB_DEVICE_TYPE_ISO11898 13
#define BFLB_DEVICE_TYPE_CAMERA   14
#define BFLB_DEVICE_TYPE_FLASH    15
#define BFLB_DEVICE_TYPE_QSPI     16
#define BFLB_DEVICE_TYPE_SDH      17
#define BFLB_DEVICE_TYPE_SDU      18
#define BFLB_DEVICE_TYPE_ETH      19
#define BFLB_DEVICE_TYPE_RTC      20
#define BFLB_DEVICE_TYPE_CRC      21
#define BFLB_DEVICE_TYPE_RNG      22
#define BFLB_DEVICE_TYPE_MIPI     23
#define BFLB_DEVICE_TYPE_DPI      24
#define BFLB_DEVICE_TYPE_DSI      25
#define BFLB_DEVICE_TYPE_CSI      26
#define BFLB_DEVICE_TYPE_USB      27
#define BFLB_DEVICE_TYPE_AES      28
#define BFLB_DEVICE_TYPE_SHA      29
#define BFLB_DEVICE_TYPE_MD5      30
#define BFLB_DEVICE_TYPE_TRNG     31

struct bflb_device_s {
    const char *name;
    uint32_t reg_base;
    uint8_t irq_num;
    uint8_t idx;
    uint8_t sub_idx;
    uint8_t dev_type;
    void *user_data;
};

#ifdef __cplusplus
extern "C" {
#endif

struct bflb_device_s *bflb_device_get_by_name(const char *name);
struct bflb_device_s *bflb_device_get_by_id(uint8_t type, uint8_t idx);
void bflb_device_set_userdata(struct bflb_device_s *device, void *user_data);

#ifdef __cplusplus
}
#endif

#endif
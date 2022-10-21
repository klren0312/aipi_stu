#include "bflb_core.h"
#include "bl808_memorymap.h"
#include "bl808_irq.h"

#define DMA_CHANNEL_OFFSET 0x100

struct bflb_device_s bl808_device_table[] = {
    { .name = "adc",
      .reg_base = AON_BASE,
      .irq_num = BL808_IRQ_GPADC_DMA,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_ADC,
      .user_data = NULL },
    { .name = "dac",
      .reg_base = GLB_BASE,
      .irq_num = 0xff,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_DAC,
      .user_data = NULL },
    { .name = "gpio",
      .reg_base = GLB_BASE,
      .irq_num = BL808_IRQ_GPIO_INT0,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_GPIO,
      .user_data = NULL },
    { .name = "uart0",
      .reg_base = UART0_BASE,
      .irq_num = BL808_IRQ_UART0,
      .idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_UART,
      .user_data = NULL },
    { .name = "uart1",
      .reg_base = UART1_BASE,
      .irq_num = BL808_IRQ_UART1,
      .idx = 1,
      .dev_type = BFLB_DEVICE_TYPE_UART,
      .user_data = NULL },
    { .name = "spi0",
      .reg_base = SPI0_BASE,
      .irq_num = BL808_IRQ_SPI0,
      .idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_SPI,
      .user_data = NULL },
    { .name = "pwm0",
      .reg_base = PWM_BASE,
      .irq_num = BL808_IRQ_PWM,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_PWM,
      .user_data = NULL },
    { .name = "dma0_ch0",
      .reg_base = DMA0_BASE + 1 * DMA_CHANNEL_OFFSET,
      .irq_num = BL808_IRQ_DMA0_ALL,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_DMA,
      .user_data = NULL },
    { .name = "dma0_ch1",
      .reg_base = DMA0_BASE + 2 * DMA_CHANNEL_OFFSET,
      .irq_num = BL808_IRQ_DMA0_ALL,
      .idx = 0,
      .sub_idx = 1,
      .dev_type = BFLB_DEVICE_TYPE_DMA,
      .user_data = NULL },
    { .name = "dma0_ch2",
      .reg_base = DMA0_BASE + 3 * DMA_CHANNEL_OFFSET,
      .irq_num = BL808_IRQ_DMA0_ALL,
      .idx = 0,
      .sub_idx = 2,
      .dev_type = BFLB_DEVICE_TYPE_DMA,
      .user_data = NULL },
    { .name = "dma0_ch3",
      .reg_base = DMA0_BASE + 4 * DMA_CHANNEL_OFFSET,
      .irq_num = BL808_IRQ_DMA0_ALL,
      .idx = 0,
      .sub_idx = 3,
      .dev_type = BFLB_DEVICE_TYPE_DMA,
      .user_data = NULL },
    { .name = "dma0_ch4",
      .reg_base = DMA0_BASE + 5 * DMA_CHANNEL_OFFSET,
      .irq_num = BL808_IRQ_DMA0_ALL,
      .idx = 0,
      .sub_idx = 4,
      .dev_type = BFLB_DEVICE_TYPE_DMA,
      .user_data = NULL },
    { .name = "dma0_ch5",
      .reg_base = DMA0_BASE + 6 * DMA_CHANNEL_OFFSET,
      .irq_num = BL808_IRQ_DMA0_ALL,
      .idx = 0,
      .sub_idx = 5,
      .dev_type = BFLB_DEVICE_TYPE_DMA,
      .user_data = NULL },
    { .name = "dma0_ch6",
      .reg_base = DMA0_BASE + 7 * DMA_CHANNEL_OFFSET,
      .irq_num = BL808_IRQ_DMA0_ALL,
      .idx = 0,
      .sub_idx = 6,
      .dev_type = BFLB_DEVICE_TYPE_DMA,
      .user_data = NULL },
    { .name = "dma0_ch7",
      .reg_base = DMA0_BASE + 8 * DMA_CHANNEL_OFFSET,
      .irq_num = BL808_IRQ_DMA0_ALL,
      .idx = 0,
      .sub_idx = 7,
      .dev_type = BFLB_DEVICE_TYPE_DMA,
      .user_data = NULL },
    { .name = "i2c0",
      .reg_base = I2C0_BASE,
      .irq_num = BL808_IRQ_I2C0,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_I2C,
      .user_data = NULL },
    { .name = "timer0",
      .reg_base = TIMER0_BASE,
      .irq_num = BL808_IRQ_TIMER0,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_TIMER,
      .user_data = NULL },
    { .name = "timer1",
      .reg_base = TIMER1_BASE,
      .irq_num = BL808_IRQ_TIMER1,
      .idx = 1,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_TIMER,
      .user_data = NULL },
    { .name = "rtc",
      .reg_base = HBN_BASE,
      .irq_num = BL808_IRQ_HBN_OUT0,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_RTC,
      .user_data = NULL },
    { .name = "aes",
      .reg_base = SEC_ENG_BASE,
      .irq_num = 0xff,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_AES,
      .user_data = NULL },
    { .name = "sha",
      .reg_base = SEC_ENG_BASE,
      .irq_num = 0xff,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_SHA,
      .user_data = NULL },
    { .name = "trng",
      .reg_base = SEC_ENG_BASE,
      .irq_num = 0xff,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_TRNG,
      .user_data = NULL },
    { .name = "emac0",
      .reg_base = EMAC_BASE,
      .irq_num = BL808_IRQ_EMAC,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_ETH,
      .user_data = NULL },
    { .name = "irtx",
      .reg_base = IR_BASE,
      .irq_num = BL808_IRQ_IRTX,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_IR,
      .user_data = NULL },
    { .name = "irrx",
      .reg_base = IR_BASE,
      .irq_num = BL808_IRQ_IRRX,
      .idx = 0,
      .sub_idx = 0,
      .dev_type = BFLB_DEVICE_TYPE_IR,
      .user_data = NULL },
};

struct bflb_device_s *bflb_device_get_by_name(const char *name)
{
    for (uint8_t i = 0; i < sizeof(bl808_device_table) / sizeof(bl808_device_table[0]); i++) {
        if (strcmp(bl808_device_table[i].name, name) == 0) {
            return &bl808_device_table[i];
        }
    }
    return NULL;
}

struct bflb_device_s *bflb_device_get_by_id(uint8_t type, uint8_t idx)
{
    for (uint8_t i = 0; i < sizeof(bl808_device_table) / sizeof(bl808_device_table[0]); i++) {
        if ((bl808_device_table[i].dev_type == type) && (bl808_device_table[i].idx = idx)) {
            return &bl808_device_table[i];
        }
    }
    return NULL;
}

void bflb_device_set_userdata(struct bflb_device_s *device, void *user_data)
{
    device->user_data = user_data;
}
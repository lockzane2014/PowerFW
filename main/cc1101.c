#include <stdio.h>
#include "cc1101.h"
#include "driver/spi_master.h"

esp_err_t cc1101_init(void)
{
    printf("CC1101 Sub-GHz radio initializing...\n");
    // TODO: Full SPI + CC1101 register setup
    return ESP_OK;
}

void cc1101_transmit(uint8_t *data, size_t len)
{
    printf("Transmitting %d bytes via CC1101\n", len);
    // TODO: Implement real transmit
}

void cc1101_receive(void)
{
    printf("Listening on CC1101...\n");
    // TODO: Implement RX
}

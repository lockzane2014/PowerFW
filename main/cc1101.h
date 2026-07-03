#ifndef CC1101_H
#define CC1101_H

#include "esp_err.h"

esp_err_t cc1101_init(void);
void cc1101_transmit(uint8_t *data, size_t len);
void cc1101_receive(void);

#endif

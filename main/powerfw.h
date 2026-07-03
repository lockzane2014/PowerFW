#ifndef POWERFW_H
#define POWERFW_H

#include "esp_err.h"

// Init all hardware
esp_err_t powerfw_init(void);

// Menu
void menu_start(void);

// Display
esp_err_t display_init(void);
void display_clear(void);
void display_text(const char* text);

// CC1101
esp_err_t cc1101_init(void);
void cc1101_transmit(uint8_t *data, size_t len);
void cc1101_receive(void);

#endif

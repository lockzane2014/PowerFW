#ifndef DISPLAY_H
#define DISPLAY_H

#include "esp_err.h"

esp_err_t display_init(void);
void display_clear(void);
void display_text(const char* text);

#endif

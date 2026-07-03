#include <stdio.h>
#include "display.h"
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_ops.h"

esp_err_t display_init(void)
{
    printf("Display initializing (T-Embed)...\n");
    // TODO: Add actual LCD init for LilyGO T-Embed later
    return ESP_OK;
}

void display_clear(void)
{
    printf("[Display] Screen cleared\n");
}

void display_text(const char* text)
{
    printf("[Display] %s\n", text);
}

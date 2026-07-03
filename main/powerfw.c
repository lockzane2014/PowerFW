#include "powerfw.h"
#include "display.h"
#include "cc1101.h"

esp_err_t powerfw_init(void)
{
    esp_err_t ret = ESP_OK;

    ret |= display_init();
    ret |= cc1101_init();

    if (ret == ESP_OK) {
        printf("PowerFW initialized successfully!\n");
        display_text("PowerFW Ready");
    } else {
        printf("PowerFW init failed!\n");
    }

    return ret;
}

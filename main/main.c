#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "powerfw.h"

void app_main(void)
{
    printf("PowerFW Starting...\n");
    
    // Initialize hardware
    powerfw_init();
    
    // Start main menu
    menu_start();
    
    // Main loop (FreeRTOS)
    while (1) {
        vTaskDelay(pdMS_TO_TICKS(100));
    }
}

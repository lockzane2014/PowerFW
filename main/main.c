#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    printf("PowerFW Starting...\n");
    
    while (1) {
        printf("Hello from PowerFW!\n");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

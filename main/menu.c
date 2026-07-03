#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "menu.h"
#include "powerfw.h"

static void menu_task(void *pvParameters)
{
    while (1) {
        printf("PowerFW Menu - Waiting for implementation...\n");
        // TODO: Add button input + display later
        vTaskDelay(pdMS_TO_TICKS(1000));
    }
}

void menu_start(void)
{
    xTaskCreate(menu_task, "menu_task", 4096, NULL, 5, NULL);
    printf("Menu started!\n");
}

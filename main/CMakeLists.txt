idf_component_register(
    SRCS 
        "main.c"
        "menu.c"
        "cc1101.c"
        "display.c"
        "display.h"
    INCLUDE_DIRS "."
    REQUIRES driver esp_lcd
)

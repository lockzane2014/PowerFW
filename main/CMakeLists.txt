idf_component_register(
    SRCS 
        "main.c"
        "powerfw.c"
        "menu.c"
        "cc1101.c"
        "display.c"
    INCLUDE_DIRS "."
    REQUIRES driver
)

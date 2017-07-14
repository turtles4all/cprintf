#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef _CPRINTF_H
#define _CPRINTF_H

//RESET:
#define COLOR_RESET         "\x1b[0m"

//FORMATS:
#define FM_BOLD             "\x1b[1m"
#define FM_BLINK            "\x1b[5m"
#define FM_UNDERLINE        "\x1b[4m"
#define FM_INVERT           "\x1b[7m"
#define FM_LINE_THROUGH     "\x1b[9m"

//TEXT COLORS:
#define BLACK               "\x1b[30m"
#define RED                 "\x1b[31m"
#define GREEN               "\x1b[32m"
#define YELLOW              "\x1b[33m"
#define BLUE                "\x1b[34m"
#define MAGENTA             "\x1b[35m"
#define CYAN                "\x1b[36m"
#define WHITE               "\x1b[37m"
#define LIGHT_RED           "\x1b[91m"
#define LIGHT_GREEN         "\x1b[92m"
#define LIGHT_YELLOW        "\x1b[93m"
#define LIGHT_BLUE          "\x1b[94m"
#define LIGHT_MAGENTA       "\x1b[95m"
#define LIGHT_CYAN          "\x1b[96m"
#define LIGHT_WHITE         "\x1b[97m"

//BACKGROUND COLORS:
#define BG_BLACK            "\x1b[40m"
#define BG_RED              "\x1b[41m"
#define BG_GREEN            "\x1b[42m"
#define BG_YELLOW           "\x1b[43m"
#define BG_BLUE             "\x1b[44m"
#define BG_MAGENTA          "\x1b[45m"
#define BG_CYAN             "\x1b[46m"
#define BG_WHITE            "\x1b[47m"
#define BG_LIGHT_RED        "\x1b[101m"
#define BG_LIGHT_GREEN      "\x1b[102m"
#define BG_LIGHT_YELLOW     "\x1b[103m"
#define BG_LIGHT_BLUE       "\x1b[104m"
#define BG_LIGHT_MAGENTA    "\x1b[105m"
#define BG_LIGHT_CYAN       "\x1b[106m"
#define BG_LIGHT_WHITE      "\x1b[107m"


#define cprintf(format, ...) \
    _c_printf(format, __VA_ARGS__, COLOR_RESET);

#endif

int _c_printf(char *format, ... );

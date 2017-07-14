# cprintf
All the funtionality of printf but with colors and markings. 

cprintf.h will add the color definitions to the program and they can also be used with %s operator in printf but the last variable must call COLOR_RESET or the following terminal output will result in the same markup until COLOR_RESET is called.

cprinf will automaticly reset color markings for the terminal after output has been displayed to stdout.

Usage:

#include "cprintf.h"

int main(void)
{
  int number = 42;
  cprintf("%sRed int %d %s%sYello text", RED, number, COLOR_RESET, YELLOW);
  retun 0;
}

Make sure to link to cprintf.o

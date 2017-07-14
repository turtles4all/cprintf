# cprintf
All the funtionality of printf but with colors and markings. 

cprintf.h will add the color definitions to the program and they can also be used with %s operator in printf but the last variable must call COLOR_RESET or the following terminal output will result in the same markup until COLOR_RESET is called.

cprinf will automaticly reset color markings for the terminal after output has been displayed to stdout.

Usage:

```c
#include "cprintf.h"

int main(void){
	
	int number = 42;
	
	cprintf("%s%sRED INT:%d %sNORMAL AGAIN%sGREEN%s%sYELLOW INVERTED\n", 
	FM_INVERT, RED, number, COLOR_RESET, GREEN, FM_INVERT, LIGHT_YELLOW);
	
	printf("Normal Print");
	
	return 0;
}

```

![Example](https://github.com/turtles4all/cprintf/cprintf-example.png)

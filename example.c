
#include "cprintf.h"

int main(void){
	
	int number = 42;

	cprintf("%s%sRED INT:%d %sNORMAL AGAIN%sGREEN%s%sYELLOW INVERTED\n", 
	FM_INVERT, RED, number, COLOR_RESET, GREEN, FM_INVERT, LIGHT_YELLOW);
	
	printf("Normal Print\n");
	
	return 0;
}

#include "cprintf.h"
#include <string.h>
#include <sys/types.h>
int _c_printf(char *format, ... )
{   
    int l = strlen(format);
    char *t_format = (char *)calloc(1, (sizeof(char) * 2)+(l * sizeof(char)));
    char *s = "%s";
    va_list arg;
    int done;
    
    sprintf(t_format, "%s%s", format, s);
    format = t_format;
    
    va_start(arg, format);
    done = vfprintf(stdout, format, arg);
    va_end(arg);
    
    free(format);
    return done;
}





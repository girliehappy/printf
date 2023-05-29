#include <stdarg.h>
#include "main.h"

int print_per(char *format, va_list percentage)
{
	(void)format;
	(void)percentage;
	rh_putchar('%');

	return(1);
}

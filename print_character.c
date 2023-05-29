#include <stdarg.h>
#include "main.h"

/**
 * print_char - Show a character
 * @arg: This is the va_list args from _printf
 * @s: This is the pointer to the struct flags that determines if a flag is
 * passed to _printf
 * Return: The number of characters that is printed
 */
int print_char(const char *s, va_list arg)
{
	const char *r = s;

	while (*r != 'c')
		r++;
	rh_putchar(va_arg(arg, int));
	return (1);
}


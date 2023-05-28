#include <unistd.h>
#include "main.h"

/**
 * _printf - a function that behaves like printf
 * @format: a char to be printed
 * @...: other variable arguement
 *
 * Return: Always 0 (success)
 */

int _printf(const char *format, ...)
{
	int r;
	r = 0;

	while (format[r])
	{
		write(1, &format[r], 1);
		r++;
	}

	return (0);
}

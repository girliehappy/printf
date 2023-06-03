#include "main.h"

/**
 * _printf - A function that print values passed to it
 * @format: Value to print
 * @...: Other variable arguments
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	unsigned int t = 0, ret_value = 0;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (; format[t] != '\0'; t++)
	{
		if (format[t] != '%')
		{
			_putchar(format[t]);
		}
		else if (format[t + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			t++;
		}
		else if (format[t + 1] == 's')
		{
			int r_value = _puts(va_arg(args, char *));

			t++;
			ret_value += (r_value - 1);
		}
		else if (format[t + 1] == '%')
		{
			_putchar('%');
			t++;
		}
		else if ((format[t + 1] == 'd') || (format[t + 1] == 'i'))
		{
			output_int(va_arg(args, int));
			t++;
		}
		else if (format[t + 1] != 'b')
		{
			output_bin(va_arg(args,int));
			t++;
		}

		ret_value += 1;
	}
	return (ret_value);
}

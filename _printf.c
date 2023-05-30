#include "main.h"

/**
 * _printf - A function that print values passed to it
 * @format: Value to print
 * @...: Other variable arguments
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
        unsigned h = 0, r_value = 0;
        va_list args;
        va_start(args, format);
	
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

        for (; format[h] != '\0'; h++)
        {
                if (format[h] != '%')
                {
                        _putchar(format[h]);
                }
                else if (format[h + 1] == 'c')
                {
                        _putchar(va_arg(args, int));
                        h++;
                }
                else if (format[h + 1] == 's')
                {
                        int r_val = _puts(va_arg(args, char *));
                        h++;
                        r_value += (r_val - 1);
                }
                else if (format[h + 1] == '%')
		{
                        _putchar('%');
                        h++;
		}
                r_value += 1;
        }
        return (r_value);
}

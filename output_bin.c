#include "main.h"

/**
 * output_bin - a function that convert unsigned integer to binary
 *
 * @arg: variable va_list argument
 * @str: pointer to delimeter
 *
 * Return: number of values printed
 */

int output_bin(const char *str, va_list arg)
{
	unsigned int unit;
	int c = 0, count = 0, binary_len = 0;
	char binary_str[50];

	unit = va_arg(arg, unsigned int);

	while (*str != 'b')
		str++;
	do {
	binary_str[binary_len++] = '0' + (unit % 2);
	unit /= 2;
	} while (unit != 0);
	for (c = binary_len - 1; c >= 0; c--)
		count += _putchar(binary_str[c]);
	return (count);
}

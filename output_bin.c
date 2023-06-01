#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
* output_bin - conversion of unsigned int argument to binary
* @c: the number in decimal
* Return: num of chars printed
*/
int output_bin(va_list c)
{
	unsigned int l, p, t, figure, x, num;
	int count = 0;

	x = va_arg(c, unsigned int);
	if (x != 0)
	{
		num = x;
		l = 0;
		while (num != 0)
		{
			num /= 2;
			l++;
		}
		p = 1;
		for (t = 1; t <= l - 1; t++)
			p *= 2;
		for (t = 1; t <= l; t++)
		{
		figure = x / p;
			_putchar(figure + '0');
			count++;
			x -=figure * p;
			p /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}

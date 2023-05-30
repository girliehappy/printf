#include "main.h"

/**
 * _puts - A function that prints a string
 * @string: The string to print
 * Return: The sting value
 */
int _puts(char *string)
{
	int p = 0, r_value = 0;

	if (string)
	{
		while (string[p] != '\0')
		{
		_putchar(string[p]);
		r_value += 1;
		p++;
		}
	}
	return (r_value);
}

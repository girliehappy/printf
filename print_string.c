#include "main.h"

/**
 * print_str - A function that prints a string
 * @string: The string to be inputed
 * Return: The number of the string
 */
int print_str(char *string)
{
	int ps = 0;

	while (*string)
	{
		rh_putchar(*string);
		string++;
		ps++;
	}
	return (ps);
}

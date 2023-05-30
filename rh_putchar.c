#include <unistd.h>

/**
 * rh_putchar - A function that writes a character
 * @c: This is the character to be printed
 * Return: 1 (Success), -1 if error
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

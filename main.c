#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char let = 'i';
	int r_val;
	int r_val2;
	char sent[] = "Mary and";

	puts("\nUsing std printf\n");
	r_val = printf("%s %d are 100%% good friends\n", sent, let);
	printf("r_val is %d\n", r_val);

	puts("\nUsing our printf\n");
	r_val2 = _printf("%s %d are 100%% good friends\n", sent, let);
	printf("r_val2 is %d\n", r_val2);

	return (0);
}

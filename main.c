#include <stdio.h>
#include <unistd.h>
#include "main.h"
int main(void)
{
	int count_vd = 0;
	int count_lmt = 0;
	int number = 17;

	write (1,"VERIFIED:\n", 10);
	count_vd += printf("HAPINESS\n");
	printf("There are up to %d cups in the basket\n", number);

	write (1, "TESTING:\n", 9);
	count_lmt += _printf("RUQAYYAH\n");
	_printf("There are up to %d cups in the basket\n", number);

	return (0);
}

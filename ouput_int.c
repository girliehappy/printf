#include "main.h"

int output_int(int num)
{
	int r, count_lmt = 0;

	if (num == 0)
		return (0);
	else
	{
		r = num/10;
	}
	output_int(r);
	putchar(num%10 + '0');
	count_lmt += 1;
	return(count_lmt);
}

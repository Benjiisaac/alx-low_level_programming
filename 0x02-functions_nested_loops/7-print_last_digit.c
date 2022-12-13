#include "main.h"

int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;

	if (last_digit < 0)
		last_digit = last_digit * -1;
	return(last_digit);
}

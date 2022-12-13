#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to print the last digit of
 *
 * Return: the last digit of n
 */

int print_last_digit(int r)
{
	int ld;

	ld = r % 10;

	if (ld < 0)
		ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}

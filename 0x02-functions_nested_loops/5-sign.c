#include "main.h"

/**
 * print_sign - check if a character is alphabetical
 * @n: the character to check
 *
 * Return: 1 if greater than 0, 0 if equals to zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

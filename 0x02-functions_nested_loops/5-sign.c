#include "main.h"

/**
 * print_sign - check if a character is alphabetical
 * @c: the character to check
 *
 * Return: 1 if c is alpha, 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return ('+');
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return ('-');
	}
}

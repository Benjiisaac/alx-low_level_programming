#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @n: the number to compute the absolute value of
 *
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}

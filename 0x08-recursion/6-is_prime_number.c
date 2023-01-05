#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int is_prime_number(int n)
{
	int i;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

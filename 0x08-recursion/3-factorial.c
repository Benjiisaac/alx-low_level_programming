#include "main.c"
/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1))
}

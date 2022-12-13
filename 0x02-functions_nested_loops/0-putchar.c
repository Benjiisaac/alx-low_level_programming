#include "main.h"
/**
 * main - programme that prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *a = "_putchar\n";

	while (*a)
	{
		_putchar(*a);
		a++;
	}
	return (0);
}

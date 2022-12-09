#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", i);
			printf(", ");
			printf("%d", j);
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}

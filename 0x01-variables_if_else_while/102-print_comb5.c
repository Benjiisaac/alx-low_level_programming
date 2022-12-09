#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			if (i == j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				printf(" ");
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				printf(", ");
			}
			else
			{
				 putchar(i / 10 + '0');
				 putchar(i % 10 + '0');
				 printf(" ");
				 putchar(j / 10 + '0');
				 putchar(j % 10 + '0');
				 printf(", ");
					break;
			}
		}
	}
	return (0);
}

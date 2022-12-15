#include "main.h"

/**
 * more_number - a function that prints 10 times 0-14
 *
 * Return: x10 0-14
 */

void more number(void)
{
	int c;
	int counter = 0;

	while (counter < 10)
	{
		for (c = 0 ; c <= 14 ; c++)
		{
			_putchar(c);
		}
		counter++;
		_putchar('\n');
	}
}

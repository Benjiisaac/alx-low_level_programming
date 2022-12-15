#include "main.h"

/**
 * print_triangle - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a triangle made of '#'
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = size; i > 0; i--)
		{
			for (j = 1; j <= size; j++)
				if (j >= i)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}

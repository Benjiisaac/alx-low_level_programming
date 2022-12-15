#include "main.h"

/**
 * print_triangle - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a triangle made of '#'
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

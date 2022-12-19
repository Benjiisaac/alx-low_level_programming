#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - Write a function that prints every other character of a string,
 *         starting with the first character, followed by a new line.
 *
 * @str: This pointer point to a char or string
 *
 *
 */

void puts_half(char *str)
{
	int i;
	int L = strlen(str) / 2;

	for (i = L / 2 + L % 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

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
	int y;

	i = 0;
	while (str[i] != '\0')
		i++;

	y = i / 2;

	if (i % 2 == 1)
		y++;

	while (y < i)
	{
		_putchar(str[y]);
		y++;
	}
	_putchar('\n');
}

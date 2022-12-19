#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - prints a string in reverse, followed by a new line
 * @s: string to be printed in reverse
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1 ; i >= 0 ; i--)
		putchar(s[i]);
	putchar('\n');
}

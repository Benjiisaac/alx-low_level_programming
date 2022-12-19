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
	char tmp;

	for (i = 0 ; i < len / 2 ; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}

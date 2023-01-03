#include <stddef.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: a char pointer to the string to search
 * @c: the character to search for
 * Return: pointer to s[i] or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == '\0')
		return (s);
	else
		return (s);
	return (NULL);
}

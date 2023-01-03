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
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

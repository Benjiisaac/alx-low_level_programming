#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: a char pointer to the string to search
 * @c: the character to search for
 *
 * Return: a pointer to the first occurrence of c in s,
 * or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

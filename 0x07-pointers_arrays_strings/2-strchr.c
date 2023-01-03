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
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}

#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: a char pointer to the string to search
 * @accept: a char pointer to the characters to search for in s
 *
 * Return: the number of bytes in the initial segment of s that
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *ptr;

	while (*s != '\0')
	{
		ptr = accept;
		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				c++;
				break;
			}
			ptr++;
		}
		if (ptr == '\0')
		{
			break;
		}
		s++;
	}
	return (c);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to a new string containing the concatenation of s1 and s2,
 * or NULL if memory allocation fails. If s1 or s2 is NULL, treat it as an
 * empty string.
 */

char *str_concat(char *s1, char *s2)
{
	int l1 = 0;
	int l2 = 0;
	int new;
	char *new_string;

	if (s1 != NULL)
		l1 = strlen(s1);
	if (s2 != NULL)
		l2 = strlen(s2);
	new = l1 + l2;
	new_string = malloc(sizeof(char) * (new + 1));

	if (new_string == NULL)
		return (NULL);
	if (s1 != NULL)
		strncpy(new_string, s1, l1);
	if (s2 != NULL)
		strncat(new_string, s2, l2);
	*(new_string + new) = '\0';
	return (new_string);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strdup - creates a copy of a given string
* @str: the string to be copied
*
* Return: pointer to the new string, or NULL if memory allocation fails
*         or if str is NULL
*/

char *_strdup(char *str)
{
	int length;
	char *dup;

	if (str == NULL)
		return (NULL);
	length = strlen(str);
	dup = malloc(sizeof(char) * (str_length + 1));

	if (dup == NULL)
		return (NULL);
	strncpy(dup, str, length);
	*(dup + length) = '\0';

	return (dup);
}

#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

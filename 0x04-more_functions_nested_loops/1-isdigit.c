#include "main.h"

/**
 * _isdigit - check if a character is num
 * @c: the character to check
 *
 * Return: 1 if c is a number, 0 otherwise
 */

int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

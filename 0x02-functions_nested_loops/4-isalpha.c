#include "main.h"

/**
 * _isalpha - check if a character is alphabetical
 * @c: the character to check
 *
 * Return: 1 if c is alpha, 0 otherwise
 */

int _isalpha(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

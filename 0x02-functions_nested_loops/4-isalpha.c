#include "main.h"

/**
 * _islower - check if a character is alphabetical
 * @c: the character to check
 *
 * Return: 1 if c is alpha, 0 otherwise
 */

int _islower(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * int _lower - a function that returns 1 if lowercase 0 otherwise
 *
 * Return: 
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

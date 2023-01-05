#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	int low;
	int high;
	int mid;
	int mid_squared;
  if (n < 0)
  {
    return -1;
  }
  low = 0;
  high = n;
  
  while (low <= high)
  {
    mid = (low + high) / 2;
    mid_squared = mid * mid;
    if (mid_squared == n)
    {
    return mid;
    }
    else if (mid_squared < n)
    {
    low = mid + 1;
    }
    else
    {
    high = mid - 1;
    }
  }
  return -1;
}


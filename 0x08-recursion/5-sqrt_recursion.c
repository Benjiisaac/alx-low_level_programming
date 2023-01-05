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
	int root;

  if (n == 0 || n == 1)
  {
    return n;
  }
  root = _sqrt_recursion(n - 1);

  if (root * root == n)
  {
    return root;
  }
  return -1;
}

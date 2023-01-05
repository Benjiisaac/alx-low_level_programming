#include "main.h"

/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n) {
  return sqrt_recursion_helper(n, 1, n);
}

int sqrt_recursion_helper(int n, int min, int max) {
  if (max < min) {
    // No natural square root
    return -1;
  }

  // Check the middle value
  int guess = (min + max) / 2;
  if (guess * guess == n) {
    // Square root found
    return guess;
  } else if (guess * guess < n) {
    // Search the upper half of the range
    return sqrt_recursion_helper(n, guess + 1, max);
  } else {
    // Search the lower half of the range
    return sqrt_recursion_helper(n, min, guess - 1);
  }
}


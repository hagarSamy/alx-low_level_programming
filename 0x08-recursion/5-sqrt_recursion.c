#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: input number
 * Return: -1 if number doesn't have a natural square root
 * or square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - a recursive helper function
 * @n: is the n for which we want a natural square root
 * @guess: an initial guess
 * Return: And integer, the square root or -1 if not found
 */
int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_recursion_helper(n, guess + 1));
}

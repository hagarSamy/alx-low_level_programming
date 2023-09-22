#include "main.h"

/**
 * void swap_int - swaps the values of two integers
 * @a: pointer to first int
 * @b: pointer to int2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	a = *b;
	b = c;
}

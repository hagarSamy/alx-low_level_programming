#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: an input array
 * @n: number of array elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

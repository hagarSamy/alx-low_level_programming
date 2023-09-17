#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input integer
 * Return: void
 */

void print_diagonal(int n)
{
	int space, postn;

	if (n <= 0)
		_putchar('\n');
	else
		for (space = 1; space <= n; space++)
		{
			for (postn = 1; postn <= space; postn++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
}

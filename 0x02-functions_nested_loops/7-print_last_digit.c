#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: input integer
 * Return: the value of the last digit
 */

int print_last_digit(int i)
{
	int r;

	if (i < 0)
		r = -1 * (i % 10);
	else
		r = i % 10;
	_putchar(r + 48);
	return (r);
}

#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: input integer
 * Return: i
 */

int _abs(int i)
{
	if (i < 0)
		i = (-1) * i;
	return (i);
}

#include"main.h"

/**
 * print_binary - function that converts a binary number to an unsigned int
 * @n: unsigned long int n number that should converted
 * Return: (void)
*/

void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL;

if (n == 0)
{
_putchar('0');
return;
}

mask <<= 63;

if (mask > n)
mask >>= 1;

while (mask)
{
	if (n & mask)
	_putchar('1');
	else
	_putchar('0');

mask >>= 1;
}
return;
}

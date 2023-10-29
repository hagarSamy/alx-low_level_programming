#include "main.h"

/**
 * print_binary - function that converts a binary number to an unsigned int
 * @n: unsigned long int n number that should be converted
 * Return: (void)
 */
void print_binary(unsigned long int n)
{
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (unsigned long int mask = 1UL << 63; mask > 0; mask >>= 1)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}

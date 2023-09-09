#include <stdio.h>

/**
 * main -entry point
 *
 * printing numbers two digit combinations
 *
 * Return: 0
 */

int main(void)
{
	int i, k;

	for (i = 48; i <= 57; i++)
	{
		for (k = i + 1; k <= 57; k++)
		{
			putchar(i);
			putchar(k);
			if (i != 56 || k != 57)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

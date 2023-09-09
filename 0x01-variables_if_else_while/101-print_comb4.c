#include <stdio.h>

/**
 * main -entry point
 *
 * printing numbers 3 digit combinations
 *
 * Return: 0
 */

int main(void)
{
	int i, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (k = i + 1; k <= 57; k++)
		{
			for (l = k + 1; l <= 57; l++)
			{
			putchar(i);
			putchar(k);
			putchar(l);
				if (i != 55 || k != 56 || l != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

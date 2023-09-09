#include <stdio.h>

/**
 * main -entry point
 *
 * printing numbers 0-9each followed by comma and space exept for 9
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

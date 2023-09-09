#include <stdio.h>

/**
 * main -entry point
 *
 * printing numbers 0-9 followed by abcdef
 *
 * Return: 0
 */

int main(void)
{
	int i, k;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (k = 97; k <= 102; k++)
		putchar(k);
	putchar('\n');
	return (0);
}

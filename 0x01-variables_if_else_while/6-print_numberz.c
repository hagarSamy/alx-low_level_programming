#include <stdio.h>

/**
 * main -entry point
 *
 * printing numbers 0-9
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

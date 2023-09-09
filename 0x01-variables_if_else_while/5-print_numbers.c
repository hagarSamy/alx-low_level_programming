#include <stdio.h>

/**
 * main - entry point
 *
 * printing numbers 1-9
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - entry point
 *
 * printing lowecase alphabet
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

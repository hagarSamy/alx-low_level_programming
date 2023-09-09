#include <stdio.h>

/**
 * main - entry point
 *
 * printing lowercase followed by uppercase alphabet
 *
 * Return: 0 on success
 */

int main(void)
{
	int i, k;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (k = 65; k <= 90; k++)
		putchar(k);
	putchar('\n');
	return (0);
}

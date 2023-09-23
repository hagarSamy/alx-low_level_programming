#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	int i, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
		k++;
	}
	printf("\n");
	for (i = k - 1; i >= 0; i--)
		putchar(s[i]);
	printf("\n");
}

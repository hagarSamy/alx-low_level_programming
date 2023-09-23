#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to a string of chars
 * Return: void
 */

void print_rev(char *s)
{
	int i, k = 0;

	for (i = 0; s[i] != '\0'; i++)
		k++;
	for (i = k - 1; i >= 0; i--)
		putchar(s[i]);
	printf("\n");
}

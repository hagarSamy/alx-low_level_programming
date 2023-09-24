#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int n, k;

	for (n = 0; str[n] != '\0'; n++)
		;
	if (n % 2 == 1)
		n = (n + 1);
	for (k = n / 2; str[k] != '\0'; k++)
		putchar(str[k]);
	putchar('\n');
}

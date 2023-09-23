#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a string
 * Return: void
 */

void rev_string(char *s)
{
	int i, k, temp;


	for (i = 0; s[i] != '\0'; i++)
		;

	for (k = 0; k < i - 1 - k; k++)
	{
		temp = s[k];
		s[k] = s[i - 1 - k];
		s[i - 1 - k] = temp;
	}
}

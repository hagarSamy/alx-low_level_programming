#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: string to fill
 * @b: character to set in memory
 * @n: number of bytes in memory
 * Return: pointer to resulting string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"

/**
 * *_strncat - concatenates two strings considering num of bytes
 * @dest: destination string
 * @src: source string
 * @n: number of bytes available at dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[i] = src[k];
		i++;
	}
	return (dest);
}

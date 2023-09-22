#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: pointer to a string
 * Return: number of bytes in string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		++i; /*because first count is 0 like its index*/
	return (i);
}

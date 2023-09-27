#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to search at
 * @c: character to searcher for
 * Return: pointer tofirst occurance of c
 * or Null if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] <= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

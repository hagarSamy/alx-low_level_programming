#include "main.h"

/**
 * _strpbrk - locates the occurence of a char of string
 *  accept in string s
 * @s: pointer to string where to find the char
 * @accept: pointer to string containing chars to find
 * Return: the pointer to the first occurence of char in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}

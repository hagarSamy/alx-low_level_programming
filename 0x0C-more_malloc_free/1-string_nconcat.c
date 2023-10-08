#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 * Return: a pointer to resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, l = 0;
	unsigned int r = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while(s1[l])
		l++;
	while(s2[r])
		r++;

	if(n >= r)
		n = r;
	p = malloc(sizeof(char) * l + n + 1);
	if(p == NULL)
	return(NULL);
	for(i = 0; i < l; i++)
		p[i] = s1[i];
	for(i = 0; i < n; i++)
		p[l + i] = s2[i];
	p[l + n + 1] = '\0';
	return(p);
}

#include "main.h"

/**
 * *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer to resulting string
 * or NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	int l = 0;
	int f, m = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l])
		l++;
	while (s2[m])
		m++;

	ptr = malloc(sizeof(s1) * (l + m + 1));

	if (ptr == NULL)
		return (NULL);
	for (f = 0; s1[f] != '\0'; f++)
		ptr[f] = s1[f];

	for (f = 0; s2[f] != '\0'; f++)

		ptr[l + f] = s2[f];
	ptr[l + f] = '\0';
	return (ptr);
}

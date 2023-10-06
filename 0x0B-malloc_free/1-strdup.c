#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space
 * which contains a copy of the string given as a parameter
 * @str: pointer to a string
 * Return: NULL if str = NULL
 * a pointer to the duplicated string on success
 */

char *_strdup(char *str)
{
	int n;
	int l = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[l])
		l++;

	ptr = malloc(sizeof(char) * l + 1);

	if (ptr == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		ptr[n] = str[n];
	ptr[l] = '\0';
	return (ptr);
}

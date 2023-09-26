#include "main.h"

/**
 * *string_toupper - changes lowercase letters of string to uppercase
 * Return: a pointer to resulting string
 */

char *string_toupper(char *)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}

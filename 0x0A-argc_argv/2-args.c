#include <stdio.h>

/**
 * main - entry point
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0
 */

int main(int __attribute__((unused)) argc, char **argv)
{
	int i;

	for (i = 0; argv[i] != NULL; i++)
		printf("%s\n", argv[i]);
	return (0);
}

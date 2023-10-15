#include"variadic_functions.h"


/**
 * print_char - prints a char
 * @p: list
 * @str: checks flag to print ", " or not
 * Return: void
 */

void print_char(char *str, va_list p)
{
	printf("%s%c", str, va_arg(p, int));

}

/**
 * print_string - prints a string
 * @p: a list
 * @str: checks flag to print ", " or not
 * Return: (void)
 */
void print_string(char *str, va_list p)
{
	char *ptr;

	ptr = va_arg(p, char *);
	if (ptr == NULL)
	{
	printf("%s%s", str, "(nil)");
	return;
	}
	printf("%s%s", str, ptr);
}


/**
 * print_int - ...
 * @p: pointer to argument
 * @str: checks flag to print ", " or not
 * Return: (void)
 */
void print_int(char *str, va_list p)
{
	printf("%s%i", str, va_arg(p, int));

}
/**
 * print_float - ...
 * @p: pointer to argument
 * @str: checks flag to print ", " or not
 * Return: (void)
 */

void print_float(char *str, va_list p)
{
	printf("%s%f", str, va_arg(p, double));

}

/**
 * print_all - variadic function to print anything
 * @format: pointer to argument
 * @...: ...
 * Return: (void)
 */

void print_all(const char * const format, ...)
{
	va_list p;
	int i = 0, j = 0;
	char *str = "";

	op identifier[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float}
	};

	va_start(p, format);

	while (format != NULL && format[i])
	{
		j = 0;


		while (j < 4)
		{
			if (identifier[j].ch[0] == format[i])
			{
				identifier[j].f(str, p);
				str = ", ";
			}

			j++;
		}
		i++;
	}

	va_end(p);
	putchar('\n');
}

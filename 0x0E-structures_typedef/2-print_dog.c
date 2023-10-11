#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: a pointer to the struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf ("Name: nil");
		if (d->owner == NULL)
			printf ("Owner: nil");
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}

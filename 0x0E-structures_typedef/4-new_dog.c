#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: pointer to dog's name
 * @age: his age
 * @owner: pointer to his owner
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *i;

	if (name == NULL || owner == NULL)
		return (NULL);
	i = malloc(sizeof(dog_t));
	if (i == NULL)
		return (NULL);
	i->name = malloc(strlen(name) + 1);
	if (i->name == NULL)
	{
		free(i);
		return (NULL);
	}
	strcpy(i->name, name);

	i->owner = malloc(strlen(owner) + 1);
	if (i->owner == NULL)
	{
		free(i->name);
		free(i);
		return (NULL);
	}
	strcpy(i->owner, owner);
	i->age = age;
	return (i);
}

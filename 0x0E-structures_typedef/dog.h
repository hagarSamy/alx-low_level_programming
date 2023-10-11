#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure representing information about a dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Desription: a struct including info about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

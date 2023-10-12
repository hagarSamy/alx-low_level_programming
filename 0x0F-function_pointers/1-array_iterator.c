#include "function_pointers.h"

/**
 * array_iterator - executes action function on array elements
 * @array: pointer to the array
 * @size: size of array
 * @action: function to excute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;


	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

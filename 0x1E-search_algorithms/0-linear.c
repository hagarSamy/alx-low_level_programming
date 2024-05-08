#include "search_algos.h"

/**
 * linear_search - a function that searches for
 * a value in an array of integers using the Linear search algorithm
 * @size: the number of elements in array
 * @array: a pointer to the first element of the array to search in
 * @value: the value to search for
 * Return: the first index where value is located
 * and -1 If value is not present in array or if array is NULL
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;


	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

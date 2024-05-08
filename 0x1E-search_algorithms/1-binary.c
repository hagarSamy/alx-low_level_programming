#include "search_algos.h"

/**
 * binary_search - a function that searches for
 * a value in a sorted array of integers using the Binary search algorithm
 * @size: the number of elements in array
 * @array: a pointer to the first element of the array to search in
 * @value: the value to search for
 * Return: the first index where value is located
 * and -1 If value is not present in array or if array is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	size_t pos = 0;
	size_t i = 0;

	for (i = 0; i <= size; i++)
	{
		printf("Searching in array: ");
		for (i = pos; i < size; i++)
		{
			printf("%d", array[i]);
			if (i != size - 1)
			{
				printf(", ");
			}
			else
				printf("\n");
		}
		if (array[pos] == value)
		{
			return (pos);
		}
		else if (i > size / 2)
		{
			return (-1);
		}
		i = pos;
		pos = (size - pos) / 2;
	}
	return (-1);
}

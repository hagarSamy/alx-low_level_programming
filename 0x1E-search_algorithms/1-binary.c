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
	size_t l = 0;
	size_t r = size - 1;
	size_t mid;

	while  (l <= r)
	{
		size_t i;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
			{
				printf(", ");
			}
			else
				printf("\n");
		}
		mid = (l + r) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}

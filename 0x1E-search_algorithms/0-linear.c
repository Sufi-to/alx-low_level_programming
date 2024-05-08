#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array using
 * linear search algorithm
 * @array: array to be searched
 * @size: number of elements in the array
 * @value: integer to be searched
 * Return: first index where value is located or -1 if failure
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of ints using
 * the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of value in array or -1 if failure
*/
int jump_search(int *array, size_t size, int value)
{
	size_t prev, step, curr, i;

	prev = 0;
	step = sqrt(size);
	curr = step;

	while (array[curr] < value && curr < size)
	{
		prev = curr;
		curr += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);
	for (i = prev; i < size && i <= curr; ++i)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}


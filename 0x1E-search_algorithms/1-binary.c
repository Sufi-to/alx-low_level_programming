#include "search_algos.h"
/**
 * binary_search - searches a value in a sorted array using binary search algo
 * @array: pointer the beginning of the array
 * @size: number of elements of the array
 * @value: number to be searched
 * Return: index of value or -1 if failure
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t lhalf, rhalf;

	if (array == NULL)
		return (-1);

	for (lhalf = 0, rhalf = size - 1; rhalf >= lhalf;)
	{
		printf("Searching in array: ");
		for (i = lhalf; i < rhalf; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = lhalf + (rhalf - lhalf) / 2;
		if (array[i] == value)
			return (i);

		if (array[i] > value)
		{
			rhalf = i - 1;
		}
		else
		{
			lhalf = i + 1;
		}
	}
	return (-1);
}

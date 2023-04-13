#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: number from which array starts
 * @max: number from which array ends
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}

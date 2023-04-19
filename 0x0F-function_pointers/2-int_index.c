#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to be searched
 * @size: number of elements in the array
 * @cmp: pointer to function
 * Return: -1 if no element matches and if size <= 0 return 1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;
	int y;

	y = 0;
	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			y = cmp(array[i]);
			if (y)
				return (i);
		}
	}
	return (-1);
}

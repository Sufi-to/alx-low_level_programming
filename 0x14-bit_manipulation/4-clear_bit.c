#include <stdio.h>
#include "main.h"

/**
 * clear_bit - value of bit at a given index to 0
 * @n: unsigned long int to be checked
 * @index: index of the bit to be set to 1
 * Return: 1 if success or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
	{
		return (-1);
	}
	k = 1 << index;

	if (*n & k)
	{
		*n ^= k;
	}
	return (1);

}

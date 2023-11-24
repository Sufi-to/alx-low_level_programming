#include <stdio.h>
#include "main.h"

/**
 * set_bit - value of bit at a given index
 * @n: unsigned long int to be checked
 * @index: index of the bit to be set to 1
 * Return: 1 if success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
	{
		return (-1);
	}
	k = 1 << index;
	*n = (*n | k);

	return (1);
}

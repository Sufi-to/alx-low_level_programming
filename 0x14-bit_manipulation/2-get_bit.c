#include <stdio.h>
#include "main.h"

/**
 * get_bit - value of bit at a given index
 * @n: unsigned long int to be checked
 * @index: index of the bit to returned
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int get;

	if (index > 64)
	{
		return (-1);
	}
	get = n >> index;
	return (get & 1);
}

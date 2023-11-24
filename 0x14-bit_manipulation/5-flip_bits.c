#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip bits to change to new number
 * @n: number to be changed
 * @m: next number
 * Return: number of bits required to change number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	int i;

	flip = n ^ m;
	i = 0;
	while (flip)
	{
		i++;
		flip &= (flip - 1);
	}

	return (i);
}

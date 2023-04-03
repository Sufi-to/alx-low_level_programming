#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals in a sqaure matrix
 * @a: the address of the array(matrix)
 * @size: size of the array (matrix)
 */
void print_diagsums(int *a, int size)
{
	int total1, total2, i;

	for (i = 0; i < size; i++)
	{
		total1 += a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		total2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", total1, total2);
}

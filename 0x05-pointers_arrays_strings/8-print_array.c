#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elemenet of an integer array
 * @a: pointer to the integer
 * @n: number of elements in array
 *
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}

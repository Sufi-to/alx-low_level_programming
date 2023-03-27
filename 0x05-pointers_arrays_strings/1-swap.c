#include "main.h"

/**
 * swap_int - swaps two int variables with each other
 * @a: pointer to first value
 * @b: pointer to secode value
 *
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

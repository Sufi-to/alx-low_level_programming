#include "variadic_functions.h"

/**
 * sum_them_all - return some of all parameters
 * @n: number of arguments
 * Return: sum of the arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	int sum;

	sum = 0;

	va_start(va, n);

	for (i = 0; i < n; i++)
		sum += va_arg(va, int);

	va_end(va);

	return (sum);
}

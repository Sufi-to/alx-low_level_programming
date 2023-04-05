#include "main.h"

int sqrt_rec(int i, int j);
/**
 * _sqrt_recursion - finds natural square root of a number
 * @n: input number
 * Return: square root of the number or -1 if it has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_rec(n, 0));
}

/**
 * sqrt_rec - find the natural square root of the number
 * @i: number for which we will find the square root
 * @j: keeps count
 * Return: square root of number
 */
int sqrt_rec(int i, int j)
{
	if (j * j > i)
		return (-1);
	if (j * j == i)
		return (j);
	return (sqrt_rec(i, j + 1));
}

#include "main.h"

int fu_prime(int n, int i);
/**
 * is_prime_number - function to tell if a number is prime or not
 * @n: input number to check
 * Return: return 1 if the integer is prime and 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (fu_prime(n, n - 1));
}

/**
 * fu_prime - findout if number is prime recursively
 * @n: number to evaluate
 * @i: loop iterator
 * Return: 1 if number is prime, o if otherwise
 */
int fu_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (fu_prime(n, i - 1));
}

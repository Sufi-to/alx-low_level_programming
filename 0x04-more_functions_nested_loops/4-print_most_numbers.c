#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	int i;

	i = 47;

	while (i <= 57 && (i != 2 && i != 4))
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

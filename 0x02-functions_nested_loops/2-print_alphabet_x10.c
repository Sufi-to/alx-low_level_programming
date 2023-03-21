#include "main.h"

/**
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int i;
	int a;

	a = 97;

	for (i = 0; i < 10; i++)
	{
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		a = 97;
		_putchar('\n');
	}
	
	return (0);
}

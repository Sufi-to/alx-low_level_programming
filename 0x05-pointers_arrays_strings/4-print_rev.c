#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 *
*/
void print_rev(char *s)
{
	int i;
	int len;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	len = i - 1;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}

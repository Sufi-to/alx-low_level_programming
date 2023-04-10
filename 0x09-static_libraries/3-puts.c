#include "main.h"

/**
 * _puts - prints the string to standar output
 * @s: string to be printed
 *
*/
void _puts(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}

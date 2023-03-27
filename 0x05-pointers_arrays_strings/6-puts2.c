#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: string from which the characters are to be printed
 *
*/
void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

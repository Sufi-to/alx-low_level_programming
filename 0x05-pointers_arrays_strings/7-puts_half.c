#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string from which the half is going to be from
 *
*/
void puts_half(char *str)
{
	int i;
	int len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (len = i / 2;len < i;len++)
		{
			_putchar(str[len]);
		}
	}
	else if (i % 2 != 0)
	{
		for (len = (i - 1) / 2;len < i;len++)
                {
                        _putchar(str[len]);
                }
	}
	_putchar('\0');
}

#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: string to be printed
 * Return: nothing to return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0);
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

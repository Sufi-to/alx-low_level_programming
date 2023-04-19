#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: name to be printed
 * @f: pointer to function
 * Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{

	if (name && f)
	{
		f(name);
	}
}

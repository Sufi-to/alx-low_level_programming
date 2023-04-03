#include "main.h"

/**
 * set_string - sets the value a pointer to a string
 * @s: pointer to pointer
 * @to: string to where the pointer will point
 */
void set_string(char **s, char *to)
{
	*s = to;
}

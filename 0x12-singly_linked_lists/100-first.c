#include <stdio.h>

/**
 * befmain - function executed before main
 * Return - nothing
 *
*/
void __attribute__((constructor)) befmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\n bore my house upon my back!\n");
}

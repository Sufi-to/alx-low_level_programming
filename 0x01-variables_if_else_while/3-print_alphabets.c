#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;
	int x;
	
	i = 97;
	x = 65;

        while (i <= 122)
        {
                putchar(i);
                i++;
        }

	while (x <= 90)
	{
		putchar(x);
		x++;
	}
        putchar('\n');
        return (0);
}

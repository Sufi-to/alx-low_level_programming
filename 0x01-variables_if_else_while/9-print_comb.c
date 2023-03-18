#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 48;

	while (x <= 57)
	{
		if (x == 57)
		{
			putchar(x);
			x++;
			continue;
		} else
		{
			putchar(x);
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	return (0);
}

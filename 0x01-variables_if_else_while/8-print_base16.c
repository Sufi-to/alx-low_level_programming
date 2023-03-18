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
	int a;
	int x;

	a = 48;
	x = 97;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (x <= 102)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

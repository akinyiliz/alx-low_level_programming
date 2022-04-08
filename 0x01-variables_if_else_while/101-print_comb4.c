#include <stdio.h>

/**
 * main - prints combination of 3 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z;

	for (x = 48; x <= 57; x++)
	{
	for (y = 48; x <= 57; y++)
	{
	for (z = 48; z <= 57; z++)
	{
	if (x == y || y <= x || x == z || y == z || z <= y)
	{
	}
	else
	{
		putchar(x);
		putchar(y);
		putchar(z);
	if (x == 55 && y == 56 && z == 57)
	{
	}
	else
	{
		putchar(44);
		putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

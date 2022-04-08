#include <stdio.h>

/**
 * main - prints all combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 10; x++)
	{ 
		putchar(x);
		if (x < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

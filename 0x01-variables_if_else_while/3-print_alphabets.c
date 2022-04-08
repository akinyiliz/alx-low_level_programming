#include <stdio.h>

/**
 * main - prints alphabet in lowercase  then uppercase
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

        /*alphabet in lowercase*/
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	
	/*alphabet in uppercase*/
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

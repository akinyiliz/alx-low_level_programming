#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * void has no return value
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

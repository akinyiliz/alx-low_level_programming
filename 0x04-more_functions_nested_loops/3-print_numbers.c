#include "main.h"

/**
 * print_number - prints numbers, 0 to 9
 *
 * void has no return type
 */
void print_numbers(void)
{
	char i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar ('\n');
}

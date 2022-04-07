#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a character: %2d bytes \n", sizeof(char));
	printf("Size of an integer: %2d bytes \n", sizeof(int));
	printf("Size of a long integer: %2d bytes \n", sizeof(long int));
	printf("Size of a float: %2d bytes \n", sizeof(float));
	printf("Size of a double: %2d bytes \n", sizeof(double));
	return(0);
}

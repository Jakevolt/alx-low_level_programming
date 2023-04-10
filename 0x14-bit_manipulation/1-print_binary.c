#include "main.h"
#include <stddef.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int i;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((n & (mask << ((sizeof(unsigned long int) * 8) - 1 - i))) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}

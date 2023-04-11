#include "main.h"
#include <stddef.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary form
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int size = sizeof(unsigned long int) * 8;
	int i, flag = 0;

	for (i = size - 1; i >= 0; i--)
	{
		if ((n >> i) & mask)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
	if (flag == 0)
		_putchar('0');
}

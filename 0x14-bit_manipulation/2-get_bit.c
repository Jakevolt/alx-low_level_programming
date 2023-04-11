#include "main.h"
#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to be searched
 * @index: The index of the bit to be returned
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}

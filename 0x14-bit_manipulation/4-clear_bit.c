#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: A pointer to the number to be modified
 * @index: The index of the bit to be cleared
 *
 * Return: 1 if the bit was cleared, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	*n &= ~mask;

	return (1);
}

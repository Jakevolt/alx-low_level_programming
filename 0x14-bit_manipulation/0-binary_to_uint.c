#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = result << 1; /* left << by 1 to add a 0 bit */
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1; /* left << by 1 and OR with 1 to add a 1 bit */
		}
		else
		{
			return (0); /* invalid character in the input string */
		}
	}

	return (result);
}

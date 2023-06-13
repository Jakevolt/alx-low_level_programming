#include "main.h"
#include <stdlib.h>

/**
 * create_array - this create an array of chars and a specific char
 * @size: this is the size of the array
 * @c: the specific char
 * Return: This returns the pointer to array null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}

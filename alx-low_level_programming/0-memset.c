#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: starting address
 * @b: the desired value
 * @n: number of bytes ti be changed
 *
 * Return: change array with new value of bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

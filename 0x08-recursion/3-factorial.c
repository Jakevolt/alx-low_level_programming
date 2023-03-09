#include "main.h"
/**
 * factorial - print the factorial of a given number
 * @n: the number to find the factorial of
 * Return: if n is greater than 0, and if n is less than 0
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);
	return (result);
}

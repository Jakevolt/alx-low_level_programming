#include "main.h"

/**
 * find_sqrt - find the square root of an inputted number
 * @num: the number imputted
 * @root: the root
 * Return: the square root
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: natural number
 * Return:suqare root of the natural number
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}

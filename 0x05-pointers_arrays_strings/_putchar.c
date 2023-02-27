#include <unistd.h>

/**
 * _putchar - writes the charatcter c to sdtout
 * @c: the character to print
 *
 * Return: on success 1
 * on error, -1 is reutrned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

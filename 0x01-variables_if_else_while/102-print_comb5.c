#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c = 0;

	int d;

	int e;

	int c1;

	int d1;

	int e1;

	while (c <= 98)
	{
		d = (c / 10 + '0');
		e = (c % 10 + '0');
		c1 = 0;
		while (c1 <= 99)
		{
			d1 = (c1 / 10 + '0');
			e1 = (c1 % 10 + '0');
			if (c < c1)
			{
				putchar(d);
				putchar(e);
				putchar(' ');
				putchar(d1);
				putchar(e1);
				if (c != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c1++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}

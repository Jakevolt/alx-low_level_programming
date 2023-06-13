#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - The function that returns a pointer to a new allocated space
 * @str: the characters to point
 * Return: 0
 */
char *_strdup(char *str)
{
	char *jjj;
	int k, l = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;
	jjj = malloc(sizeof(char) * (k + 1));
	if (jjj == NULL)
		return (NULL);
	for (l = 0; str[l]; l++)
		jjj[l] = str[l];
	return (jjj);
}

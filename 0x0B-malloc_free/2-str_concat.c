#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - The returned pointer for a newly allocated space
 * @s1: The input one to concat
 * @s2: The input two to concat
 * Return: The concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int j, kl;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = kl = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[kl] != '\0')
		kl++;
	conct = malloc(sizeof(char) * (j + kl + 1));
	if (conct == NULL)
		return (NULL);
	j = kl = 0;
	while (s1[j] != '\0')
	{
		conct[j] = s1[j];
		j++;
	}
	while (s2[kl] != '\0')
	{
		conct[j] = s2[kl];
		j++;
		kl++;
	}
	conct[j] = '\0';
	return (conct);
}

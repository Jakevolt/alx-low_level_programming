#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp, *current = *h;

	while (current)
	{
		count++;
		if (current <= current->next)
		{
			free(current);
			break;
		}
		temp = current->next;
		free(current);
		current = temp;
	}
	*h = NULL;
	return (count);
}

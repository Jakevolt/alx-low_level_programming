#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: The size of the list that was free'd.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL)
		return (count);

	current = *h;
	while (current != NULL)
	{
		count++;
		if (current->next >= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			*h = NULL;
			return (count);
		}
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (count);
}

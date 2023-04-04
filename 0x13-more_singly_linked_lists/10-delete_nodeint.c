#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index `index` of a
 *                            linked list.
 * @head: A pointer to the pointer to the first node of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if the node was successfully deleted, or -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	prev = *head;
	current = prev->next;
	for (i = 1; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current != NULL)
	{
		prev->next = current->next;
		free(current);
		return (1);
	}

	return (-1);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in
 * a listint_t list.
 * @head: A pointer to a pointer to the head of the listint_t list
 * @idx: The index of the list where the new node should be added
 * (starting at 0).
 * @n: The value of the n field for the new node.
 *
 * Return: A pointer to the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node = NULL, *curr_node = *head;
	unsigned int i = 0;

	while (curr_node != NULL && i < idx)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = curr_node;

	if (prev_node == NULL)
		*head = new_node;
	else
		prev_node->next = new_node;
	return (new_node);
}

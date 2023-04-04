#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	/* Find the meeting point */
	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
			break;
	}

	/* Check if there is no loop */
	if (!hare || !hare->next)
		return (NULL);

	/* Reset the tortoise to the head of the list */
	tortoise = head;

	/* Move both pointers at the same speed until they meet again */
	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}

	/* They have met at the beginning of the loop */
	return (hare);
}

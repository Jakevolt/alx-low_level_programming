#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first node of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	hare = head->next;
	tortoise = head;

	while (hare != NULL && hare < tortoise)

	{
	    printf("[%p] %d\n", (void *)tortoise, tortoise->n);
	    count++;
	    tortoise = tortoise->next;
	    hare = hare->next;
	    if (hare != NULL && hare < tortoise)
		hare = hare->next;
    }

	if (hare != NULL && hare >= tortoise)
	{
	printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		tortoise = tortoise->next;

		while (tortoise != hare)
		{
	printf("[%p] %d\n", (void *)tortoise, tortoise->n);
	count++;
			tortoise = tortoise->next;
		}

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	return (count);
}

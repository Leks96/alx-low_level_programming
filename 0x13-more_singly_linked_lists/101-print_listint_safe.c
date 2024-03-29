#include "lists.h"
#include <stddef.h>
/**
* print_listint_safe - Prints a listint_t linked list safely.
* @head: Pointer to the head of the linked list
*
* Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head;
	const listint_t *hare = head;
	size_t count = 0;

	if (head == NULL)
		return (0);

	while (hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			exit(98); /*Loop detected, exit with status 98*/
		}
	}
	return (count);
}


#include "lists.h"
/**
* dlistint_t - Prints the elements of a dlistint_t list
* @h: Pointer to the head of the linked list
*
* Return: Number of nodes in the linked list
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t node_count = 0;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		node_count++;
	}
		return node_count;
}

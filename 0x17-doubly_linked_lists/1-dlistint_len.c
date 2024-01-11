#include "lists.h"
/**
* dlistint_len - Returns the number of elements in a linked dlistint_t list.
* @h: Pointer to the head of the linked list.
*
* Return: Number of elements in the linked list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t * curr = h;
	size_t node_count = 0;

	while (curr != NULL)
	{
		curr = curr->next;
		node_count++;
	}

	return node_count;
}

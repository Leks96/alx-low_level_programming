#include "lists.h"
/**
* list_len - Returns the number of elements in a list_t linked list
* @h: Pointer to the head of the linked list
*
* Return: Number of nodes in the linked list
*/
size_t list_len(const list_t *h)
{
	const list_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}

	return (count);
}

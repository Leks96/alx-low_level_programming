#include "lists.h"
/**
* listint_len - Returns the number of elements in a listint_t list
* @h: Pointer to the head of the linked list
*
* Return: Number of nodes in the linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

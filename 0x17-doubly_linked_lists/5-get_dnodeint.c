#include "lists.h"
/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
* @head: Pointer to the head of the linked list.
* @index: Index of the node to retrieve, starting from 0.
*
* Return: Pointer to the nth node, or NULL if the node does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i;

	for (i = 0; curr != NULL && i < index; i++)
	{
		curr = curr->next;
	}

	if (i < index || curr == NULL)
	{
		return (NULL);
	}

	return (curr);
}

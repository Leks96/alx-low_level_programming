#include "lists.h"
/**
* insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
* @h: Pointer to a pointer to the head of the linked list.
* @idx: Index of the list where the new node should be added. Index starts at 0.
* @n: Integer value to be stored in the new node.
*
* Return: The address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr = *h;
	unsigned int i;

	if (h == NULL)
		return NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return new_node;
	}

	for (i = 0; i < idx - 1 && curr != NULL; i++)
		curr = curr->next;

	if (curr == NULL)
	{
		free(new_node);
		return NULL;
	}

	new_node->prev = curr;
	new_node->next = curr->next;

	if (curr->next != NULL)
		curr->next->prev = new_node;

	curr->next = new_node;

	return new_node;
}

#include "lists.h"
/**
* delete_dnodeint_at_index - Deletes the node at a given position in a dlistint_t list.
* @head: Pointer to a pointer to the head of the linked list.
* @index: Index of the node that should be deleted. Index starts at 0.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return -1;

	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return 1;
	}

	for (i = 0; i < index && curr != NULL; i++)
		curr = curr->next;

	if (curr == NULL)
		return -1;

	temp = curr->prev;
	temp->next = curr->next;

	if (curr->next != NULL)
		curr->next->prev = temp;

	free(curr);

	return 1;
}

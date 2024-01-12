#include "lists.h"
/**
* sum_dlistint - Returns the sum of all the data (n) in a dlistint_t linked list.
* @head: Pointer to the head of the linked list.
*
* Return: Sum of all data, or 0 if the list is empty.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int i = 0;

	if (head == NULL)
		return (0);

	while (curr != NULL)
	{
		i += curr->n;
		curr = curr->next;
	}

	return i;
}

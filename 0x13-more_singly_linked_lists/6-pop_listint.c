#include "lists.h"
/**
* pop_listint - Deletes the head node of a listint_t linked list
* and returns the head node’s data (n).
* @head: Pointer to a pointer to the head of the linked list
*
* Return: The data (n) of the head node, or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	int data;
	listint_t *p;

	if (*head == NULL)
		return (0);

	p = *head;
	data = p->n;

	*head = p->next;
	free (p);

	return (data);
}

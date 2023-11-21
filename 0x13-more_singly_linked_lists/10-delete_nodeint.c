#include "lists.h"
/**
* delete_nodeint_at_index - Deletes the node at a given position in a listint_t linked list.
* @head: Pointer to a pointer to the head of the linked list
* @index: Index of the node to be deleted (starting at 0)
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1); /*check if head or *head is NULL*/

	if (index == 0) /*delete the first node*/
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/*traverse the list to find the node before the desired index*/
	for (i = 0; p != NULL && i < index - 1; i++)
		p = p->next;

	/*check if the node at the desired index exists*/
	if (p == NULL || p->next == NULL)
		return (-1);

	/*delete the node at the desired index*/
	temp = p->next;
	p->next = temp->next;
	free(temp);

	return (1); /*return 1 on success*/
}

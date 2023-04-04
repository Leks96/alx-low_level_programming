#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* delete_nodeint_at_index - a function that deletes the node
* at index index of a listint_t linked list.
* @head: pointer to a pointer to the head of the node
* @index: position of the node
* Result: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevNode, *currNode;

	if (head == NULL && *head == NULL)
		return (-1);

	if (index < 1)
	{
		currNode = *head;
		*head = (*head)->next;
		free(currNode);
		return (1);
	}

	prevNode = *head;
	currNode = prevNode->next;

	while (index > 1 && currNode != NULL)
	{
		prevNode = currNode;
		currNode = currNode->next;
		index--;
	}

	if (currNode == NULL)
		return (-1);

	prevNode->next = currNode->next;
	free(currNode);
	return (1);
}

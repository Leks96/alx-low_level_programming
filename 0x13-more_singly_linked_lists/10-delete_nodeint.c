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
	unsigned int t;
	listint_t *prevNode, *currNode;
	prevNode = *head;
	currNode = *head;

	if (*head == NULL)
		return (-1);

	else if (index < 1)
	{
		*head = currNode->next;
		free(currNode);
		currNode = NULL;
	}
	else
	{
		for (t = 0; t < index -1 && currNode != NULL; t++)
		{
			prevNode = currNode;
			currNode = currNode->next;
		}
		prevNode->next = currNode->next;
		free(currNode);
		currNode = NULL;
	}
	return (1);
}

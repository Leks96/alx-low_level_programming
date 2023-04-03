#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* pop_listint - a function that deletes the head node of
* a listint_t linked list, and returns the head node’s data (n).
* @heaad: pointer to a pointer to the head of the structure
*
* Return: 0 if the linked is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *currNode;
	int n;

	if (*head == NULL || head == NULL)
		return (0);

	currNode = *head;
	*head = (*head)->next;
	n = currNode->n;
	free(currNode);

	return (n);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *insert_nodeint_at_index - a function that inserts
* a new node at a given position.
* @head: pointer to a pointer to the head of the node
* @idx: the position input
* @n:value input
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tempNode;
	unsigned int t;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx < 1)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	tempNode = *head;

	for (t = 0; t < idx - 1 && tempNode != NULL; t++)
	{
		tempNode = tempNode->next;
	}

	if (tempNode == NULL)
		return (NULL);

	newNode->next = tempNode->next;
	tempNode->next = newNode;

	return (newNode);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *add_nodeint_end - a function that adds a new node
* at the end of a listint_t list.
* @head: pointer to a pointer to head of the node
* @n: value input
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addNew, *currNode;

	if (head == NULL)
		return (NULL);

	addNew = malloc(sizeof(listint_t));

	if (addNew == NULL)
		return (NULL);

	addNew->n = n;
	addNew->next = NULL;

	if (*head == NULL)
	{
		*head = addNew;
		return (addNew);
	}

	currNode = *head;
	while (currNode->next != NULL)
		currNode = currNode->next;

	currNode->next = addNew;

	return (addNew);
}

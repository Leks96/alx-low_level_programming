#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *add_nodeint - a function that adds a new node
* at the beginning of a listint_t list.
* @head: pointer to the first node (head of the list)
* @n: value to ba stored in the node
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addNewNode;

	addNewNode = malloc(sizeof(listint_t));

	if (addNewNode == NULL)
		return (NULL);

	addNewNode->n = n;
	addNewNode->next = *head;
	*head = addNewNode;

	return (addNewNode);
}

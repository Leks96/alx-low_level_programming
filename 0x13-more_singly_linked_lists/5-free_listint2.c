#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_listint2 - a function that frees a listint_t list.
* @head: pointer to a pointer to head of the structure
*
* Return: 0
*/
void free_listint2(listint_t **head)
{
	listint_t *currNode;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		currNode = *head;
		*head = (*head)->next;
		free(currNode);
	}

	*head = NULL;
}

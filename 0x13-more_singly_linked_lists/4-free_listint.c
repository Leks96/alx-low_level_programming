#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_listint - a function that frees a listint_t list.
* @head: pointer to the structure
*
* Return: 0
*/
void free_listint(listint_t *head)
{
	listint_t *currNode;

	while (head != NULL)
	{
		currNode = head;
		head = head->next;
		free(currNode);
	}
}

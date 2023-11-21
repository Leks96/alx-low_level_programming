#include "lists.h"
/**
* free_listint2 - Frees a listint_t list and sets the head to NULL
* @head: Pointer to a pointer to the head of the linked list
*/
void free_listint2(listint_t **head)
{
	listint_t *p = *head;
	listint_t *next;

	while (p != NULL)
	{
		next = p->next;
		free(p);
		p = next;
	}

	*head = NULL;
}

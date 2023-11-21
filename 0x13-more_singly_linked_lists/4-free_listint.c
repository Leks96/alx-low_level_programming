#include "lists.h"
/**
* free_listint - Frees a listint_t list
* @head: Pointer to the head of the linked list
*/
void free_listint(listint_t *head)
{
	listint_t *p = head;
	listint_t *next;

	while (p != NULL)
	{
		next = p->next;
		free(p);
		p = next;
	}
}

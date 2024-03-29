#include "lists.h"
/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: Pointer to the head of the linked list
* @index: Index of the node, starting at 0
*
* Return: Pointer to the nth node, or NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int i;

	if (p == NULL)
		return (NULL);

	for (i = 0; p != NULL && i < index; i++)
		p = p->next;

	return (p);
}

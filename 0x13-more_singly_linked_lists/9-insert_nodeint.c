#include "lists.h"
/**
* insert_nodeint_at_index - Inserts a new node at a given
* position in a listint_t linked list.
* @head: Pointer to a pointer to the head of the linked list
* @idx: Index where the new node should be added (starting at 0)
* @n: Data (n) for the new node
*
* Return: Address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head;
	listint_t *new_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	/*create a new node and check if the allocation was successful*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /*set the data (n) for the new node*/
	new_node->next = NULL; /*initialize the next pointer to NULL*/

	if (idx == 0) /*insert at the beginning*/
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/*traverse the list to find the node before the desired index*/
	for (i = 0; p != NULL && i < idx - 1; i++)
		p = p->next;

	/*check if it is not possible to add the new node at the desired index*/
	if (p == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/*insert new node at the desired index*/
	new_node->next = p->next;
	p->next = new_node;

	return (new_node); /*return the address of the new node*/
}

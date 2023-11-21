#include "lists.h"
/**
* add_nodeint_end - Adds a new node at the end of a listint_t list
* @head: Pointer to a pointer to the head of the linked list
* @n: Integer value to be added to the new node
*
* Return: Address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeAtEnd = malloc(sizeof(listint_t));

	if (nodeAtEnd == NULL)
		return (NULL);

	nodeAtEnd->n = n;
	nodeAtEnd->next = NULL;

	if (*head == NULL)
		*head = nodeAtEnd; /*if list is empty*/
	else
	{
		listint_t *last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = nodeAtEnd;
	}

	return (nodeAtEnd);
}

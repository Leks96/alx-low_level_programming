#include "lists.h"
/**
* add_nodeint - Adds a new node at the beginning of a listint_t list
* @head: Pointer to a pointer to the head of the linked list
* @n: Integer value to be added to the new node
*
* Return: Address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeAtBeginning = malloc(sizeof(listint_t));

	if (nodeAtBeginning == NULL)
		return (NULL);

	nodeAtBeginning->n = n;
	nodeAtBeginning->next = *head;
	*head = nodeAtBeginning;

	return (nodeAtBeginning);
}

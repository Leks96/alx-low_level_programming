#include "lists.h"
/**
* reverse_listint - Reverses a listint_t linked list.
* @head: Pointer to a pointer to the head of the linked list
*
* Return: Pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next; /*save the next node*/
		(*head)->next = prev; /*reverse the link*/
		prev = *head; /*move the pointers one step forward*/
		*head = next;
	}

	*head = prev; /*update the head to point to the first node*/

	return (*head);
}

#include "lists.h"
/**
* sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
* @head: Pointer to the head of the linked list
*
* Return: Sum of all the data (n) in the linked list, or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum = 0;

	if (p == NULL)
		return (0);

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}

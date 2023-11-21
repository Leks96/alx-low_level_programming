#include "lists.h"
/**
* print_listint - Prints all the elements of a listint_t list
* @h: Pointer to the head of the linked list
*
* Return: The number of nodes in the linked list
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	size_t count = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		count++;
		p = p->next;
	}

	return (count);
}

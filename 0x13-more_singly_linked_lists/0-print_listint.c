#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint - a function that prints all the elements of a listint_t list.
*
* @h: pointer to linkint_t
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodesCounter = 0;
	const listint_t *addressKeeper;

	addressKeeper = h;

	while (addressKeeper != NULL)
	{
		printf("%d\n", addressKeeper->n);
		addressKeeper = addressKeeper->next;
		nodesCounter++;
	}
	return (nodesCounter);
}

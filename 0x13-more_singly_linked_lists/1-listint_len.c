#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* listint_len - a function that returns the number
* of elements in a linked listint_t list.
* @h: pointer to the structure
* 
* Return: the number of elements in a linked list.
*/
size_t listint_len(const listint_t *h)
{
	size_t nodesCounter = 0;

	while (h != NULL)
	{
		nodesCounter++;
		h = h->next;
	}
	return (nodesCounter);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* list_len - a function that returns the number of
* elements in a linked list_t list.
* @h: pointer to list
*
* Return: 0
*/
size_t list_len(const list_t *h)
{
	size_t n_odes = 0;

	while (h)
	{
		n_odes++;
		h = h->next;
	}
	return (n_odes);
}

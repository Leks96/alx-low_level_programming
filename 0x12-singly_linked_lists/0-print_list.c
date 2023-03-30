#include "lists.h"
/**
* print_list - a function that prints
* all the elements of a list_t list.
* @h: pointer to the list
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t n_odes = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n")
		n_odes++;
		h = h->next;
	}
	return (n_odes);
}

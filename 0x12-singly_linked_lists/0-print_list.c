#include "lists.h"
/**
* print_list - Prints the elements of a list_t linked list
* @h: Pointer to the head of the linked list
*
* Return: Number of nodes in the linked list
*/
size_t print_list(const list_t *h)
{
	const list_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		printf("[%u] ", curr->len);
		printf("%s", curr->str);
		count++;

		curr = curr->next;
		if (curr != NULL)
			printf(" \n");
	}
	printf("\n");

	return (count);
}

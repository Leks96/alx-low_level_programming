#include "lists.h"
void free_list(list_t *head)
{
	list_t *curr = head, *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr->str);
		free(curr);
		curr = next;
	}
}

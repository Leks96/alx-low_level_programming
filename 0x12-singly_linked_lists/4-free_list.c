#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_list - a function that frees a list_t list.
* @head: pointer to the start of the list
*
* Return: 0
*/
void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);
	if (head->str)
		free(head->str);
	free(head);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* sum_listint - a function that returns the sum
* of all the data (n) of a listint_t linked list.
* @head: pointer to first node
*
* Return: 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	unsigned int sum;
	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

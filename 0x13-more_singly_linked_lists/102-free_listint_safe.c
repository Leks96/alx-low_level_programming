#include "lists.h"
/**
* free_listint_safe - Frees a listint_t linked list safely.
* @h: Pointer to the head of the linked list
*
* Return: The size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (fast != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			/*loop detected, free the list and set the head to NULL*/
			slow = *h;
			while (slow != fast)
			{
				temp = slow;
				slow = slow->next;
				free(temp);
				count++;
			}
			*h = NULL;
			return (count);
		}
		slow = slow->next;
		fast = fast->next->next;
	}

	/*No loop detected, free the entire lists*/
	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}
	return (count);
}

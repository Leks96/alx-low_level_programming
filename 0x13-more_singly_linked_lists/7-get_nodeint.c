#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *get_nodeint_at_index - a function that returns the nth
* node of a listint_t linked list. 
* @head: pointer to the structure
* @index: positio of the node
* Return: NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodeCounter = 0;
	listint_t *currNode;
	currNode = head;

	while (currNode != NULL && nodeCounter < index)
	{
		currNode = currNode->next;
		nodeCounter++;
	}

	if (currNode != NULL && nodeCounter == index)
		return (currNode);
	else
		return (NULL);
}

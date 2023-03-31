#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);
/**
* *add_node_end - a function that adds a new node at the end of a list_t list.
* @head: pointer to the first element of the list
* @str: string to set in the new node
* Return: address of the new element, or NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	else
		*head = new;
	return (new);
}

/**
* _strlen - returns the length of a string
* @s: string
*
* Return: length of s
*/
int _strlen(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen(s + 1));
}

#include "lists.h"
int _strlen(char *s);
/**
* *add_node - a function that adds a new node at the
* beginning of a list_t list.
* @head: pointer to te first element of the list
* @str: string to set in the new node
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;
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

#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* print_name - a function that prints a name.
*
* @f: pointer to func print_name
* @name: name
*
* Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

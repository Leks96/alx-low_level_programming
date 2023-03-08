#include "main.h"
/**
* _print_rev_recursion - prints a string in reverse.
*
* @s: input characters
*
* Return: the reversed string.
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;

	_putchar(*s);
}

#include "main.h"
/**
* _isupper -  a function that checks for uppercase character.
* @c: character input
* Return: 1 if it is upper and 0 if otherwise
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

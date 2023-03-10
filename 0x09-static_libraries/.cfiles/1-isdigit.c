#include "main.h"
/*
* _isdigit - a function that checks for a digit (0 through 9).
* @c: digit input
* Return: 1 if it is a digit and 0 if otherwise
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

#include "main.h"
/**
* _strchr - locates a character in a string
* @s: input
* @c: input
*
* Return: a pointer to the first occurence of
* the character c in the string s, or NULL if
* the charcater is not found
*/
char *_strchr(char *s, char c)
{
	int i

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}

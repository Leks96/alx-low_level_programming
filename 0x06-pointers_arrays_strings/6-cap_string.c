#include "main.h"
/**
* cap_string - capitilizes all words of a string
* @s: string
*
* Return: string in uppercase
*/
char *cap_string(char *s)
{
	int i, j;
	int cap = 32;
	int sep[] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - cap;
		}
		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (s[i] == sep[j])
			{
				j = 12;
				cap = 32;
			}
		}
	}	
	return (s);
}

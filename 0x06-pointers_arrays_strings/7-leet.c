#include "main.h"
/**
* leet - Entry point
* ONE if, TWO loops only
* @n: input
* Return: Always 0 (Success)
*/
void *leet(char *n)
{
	int i, b;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (n[i] == find[b])
			{
				n[i] = replace[x / 2];
				b = 9;
			}
		}
	}

	return (n);
}

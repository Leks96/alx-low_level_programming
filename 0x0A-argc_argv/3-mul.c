#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - multiplies two numbers.
*
* @argc: the number of characters.
* @argv: the array of characters.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}

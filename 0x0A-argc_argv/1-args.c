#include <stdio.h>
#include "main.h"
/**
* main - prints the number of arguments passed into it.
*
* @argc: the number of arguments
* @argv: the array of arguments
*
* Return: Always 0
*/
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);
	return (0);
}

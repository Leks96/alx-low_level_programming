#include <stdio.h>
/**
* main - prints all arguments, one per line.
* @argc: The size of the argv array.
* @argv: An array containing the program command line arguments.
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

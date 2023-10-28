#include <stdio.h>
/**
* main - prints the number of arguments, followed by a new line.
* @argc: The size of the argv array.
* @argv: An array containing the program command line arguments.
*
* Return: Always 0.
*/

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}

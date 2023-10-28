#include <stdio.h>
/**
* main - prints the name, followed by a new line.
* @argc: The size of the argv array.
* @argv: An array containing the program command line arguments.
*
* Return: Always argc.
*/

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);

	return (0);
}

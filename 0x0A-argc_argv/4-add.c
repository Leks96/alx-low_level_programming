#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - adds positive numbers and prints the result.
* @argc: The size of the argv array.
* @argv: An array containing the program command line arguments.
*
* Return: 0 if successful, 1 if invalid input or no numbers provided.
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

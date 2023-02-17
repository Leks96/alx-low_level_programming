#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n = 97;

	for (n = 97; n <= 122; n++)
	{
		putchar(n);
		putchar(127);
	}
	return (0);
}

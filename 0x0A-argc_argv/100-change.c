#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int change(int cents);
/**
* main - Entry point
*
* @argc: arguments
* @argv: array pointing to arguments
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
* change - get change
*
* @cents: amount of coins from main function
*
* Return: change
*/
int change(int cents)
{
	int q = 25, d = 10, n = 5, t = 2, p = 1;
	int coins = 0;

	while (cents > 0)
	{
		if (cents >= q)
		{
			cents  -= q;
			coins++;
		}
		else if (cents >= d)
		{
			cents -= d;
			coins++;
		}
		else if (cents >= n)
		{
			cents -= n;
			coins++;
		}
		else if (cents >= t)
		{
			cents -= t;
			coins++;
		}
		else if (cents >= p)
		{
			cents -= p;
			coins++;
		}
	}
	return (coins);
}

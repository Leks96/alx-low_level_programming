#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if(last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if(last  == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, last);
	}
	return (0);
}
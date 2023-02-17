#include <stdio.h>
/**
* main - Entry point
* Return always 0 (success)
*/
int main (void)
{
	int size_of_char = sizeof(char);
	int size_of_int = sizeof(int);
	int size_of_long_int = sizeof(long int);
	int size_of_long_long_int = sizeof(long long int);
	int size_of_float = sizeof(float)
	printf("The size of a char: %d bytes \n", size_of_char);
	printf("The size of an int: %d bytes \n", size_of_int);
	printf("The size of long int: %d byte \n", size_of_long_int);
	printf("The size of long long int: %d bytes \n", size_of_long_long_int);
	printf("The size of a float: %d bytes \n", size_of_float);
	return (0);
}

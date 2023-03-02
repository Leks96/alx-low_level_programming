#include "main."
/**
* _strncat - concatnate two strings.
* @dest: destination.
* @src: source
* @n: max bytes to take from src
*
* Return: pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0, const = 0;
	char *ptr = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (; ((const < n) && (src[j] != '\0')); i++, j++)
	{
		dest[i] = src[i];
		const++;
	}
	dest[i + 1] = src[j + 1];
	return (ptr);
}

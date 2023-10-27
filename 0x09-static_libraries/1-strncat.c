#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 * @n: the number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destlen + i] = *src;
		src++;
	}
	dest[destlen + i] = '\0';

	return (dest);
}

#include "holberton.h"

/**
 * _strncat - Concatenates two strings together for n bytes
 * @dest: The result string
 * @src: String to append
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int size = 0;
	int i;

	if (n == 0)
		return (dest);

	while (dest[size])
		size++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[size + i] = src[i];
	dest[size + i] = '\0';

	return (dest);
}

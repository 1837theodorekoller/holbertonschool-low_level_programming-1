#include "holberton.h"

/**
 * _strstr - Finds first occurence of the substring in target string
 * @haystack: Target string
 * @needle: compare string
 * Return: Pointer if found null otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	while (*haystack)
	{
		for (a = 0; needle[a] != '\0'; a++)
		{
			if (*haystack != needle[a])
				break;
			return (haystack);
		}
		haystack++;
	}

	return (0);
}

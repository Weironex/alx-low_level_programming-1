#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: pointer to char
 * Return: Null
 */
char *_strstr(char *haystack, char *needle)

{
	int i, j;

	for (i = 0; haystack[i]; i++)

	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needles[j])
			{
				break;
			}

		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}

	}
	return (NULL);
}

#include "main.h"
/**
 * _strspn - gets the length of the prefix substring
 * @s: string where substring will look in
 * @accept: substring of accepted chars
 * Return: length of occurance
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int t = 0;

	char *d = accept;


	while (*s++)

	{
		while (*accept++)

			if (*(s - 1) == *(accept - 1))

			{
				t++;

				break;

			}
		if (!(*--accept))

			break;

		accept = d;

	}

	return (t);

}

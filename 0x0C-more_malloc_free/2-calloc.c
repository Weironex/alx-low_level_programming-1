#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @sizze: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int b;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;

	return (p);

}

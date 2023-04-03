#include "main.h"
/**
 * _memcpy - copies n bytes to the pointer of a pointer
 * @dest: pointer to char characters
 * @src: pointer to char parameters
 * @n: size of the bytes
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	}

	return (dest);

}

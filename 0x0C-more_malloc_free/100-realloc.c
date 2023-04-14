#include "main.h"
/**
 * _realloc - reallocates a memory block using memory and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *copy;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		fre(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}

		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	copy = ptr;
	for (i = 0; i < old_size; i++)
	{
		p[i] = copy[i];
	}

	free(ptr);

	return (p);

}

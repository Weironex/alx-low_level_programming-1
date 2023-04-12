#include "main.h"
/**
 * create_array -> creating array
 * @size: size of array to be created
 * @c: character an array is initialized with
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int 1;
	char *t;

	if (size == 0)
		return (NULL);

	t = (char *)malloc(size * sizeof(char));
	if (t == NULL)
		return (NULL);

	for (i = 0; i < size; i++)

		s[i] = c;


	return (t);

}

#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguemenr of your program
 * @ac: count of args passed to the function
 * @av: array of arguemnts
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			len++;

		len++;

	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}

		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);

}

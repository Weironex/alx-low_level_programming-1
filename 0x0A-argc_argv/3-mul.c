#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: n args
 * @argv: nrr agrs
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");

		return (1);

	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int outcome = num1 * num2;

	printf("%d\n", outcome);

	return (0);
}

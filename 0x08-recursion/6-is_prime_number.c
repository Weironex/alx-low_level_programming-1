#include "main.h"
int num_prime(int n, int i);
/**
 * num_prime -number is  prime?
 * @n: integer param
 * @i: integer param
 * Return: bool
 */

int num_prime(int n, int i)
{
	if (i % n == 0)
	{
		return (0);
	}
	else if (i / 2 > n)
	{
		return (num_prime(n + 2, 1));
	}
	else
	{
		return (1);
	}

}

/**
 * is_prime_number - number is prime?
 * @n: integer param
 * Return: recursion
 */

int num_prime(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}

	else
	{
		return (num_prime(3, n));
	}

}

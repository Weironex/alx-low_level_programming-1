#include "main.h"
int num_prime(int n, int i);
/**
 * is_prime_number - prime
 * @n: integer param
 * Return: recursion
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}

	return (is_prime_number(n, 2));

}

/**
 * num_prime - number is prime?
 * @n: integer param
 * @i: integer param
 * Return: bool
 */

int num_prime(int n, int i)
{
	if ((i * i) > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (num_prime(n, i + 1));
}

#include "main.h"

/**
 * actual_prime_number - calcaluate whether a values is a prime recursively
 * @n: number to be calculated
 * @i: iterator
 * Return: 1 if number is prime and 0 if not
 */
int actual_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	else
		return (actual_prime_number(n, i - 1));
}

/**
 * is_prime_number - determines whether an integer is a prime or not
 * @n: number to evaulate
 * Return: 1 if integer is a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (actual_prime_number(n, n - 1));
}

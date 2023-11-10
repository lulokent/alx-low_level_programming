#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums all its parameters
 * @n: the number of parameters to be sum
 * Return: 0 (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
		va_end(ptr);
	}
	return (sum);
}

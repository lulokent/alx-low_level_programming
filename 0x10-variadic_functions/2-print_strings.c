#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of arguments to be passed into the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(string);
}

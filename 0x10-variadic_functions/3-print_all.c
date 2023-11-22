#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: lists all types of arguments passed into function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, chec_stat;
	char *str;
	va_list list;

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				chec_stat = 0;
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				chec_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				chec_stat = 0;
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				chec_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && chec_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}

#include "main.h"

/**
 * print_square - draws a square on ternminal using '#' character
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

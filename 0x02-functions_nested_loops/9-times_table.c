#include "main.h"

/**
 * times_table - Function that prints the 9 times tables
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c, d, e;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c > 10)
			{
			d = c % 10;
			e = (c - d) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(e + '0');
			_putchar(d + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}

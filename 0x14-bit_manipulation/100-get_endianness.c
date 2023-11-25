#include "main.h"

/**
 * get_endianness - checks for endianess
 *
 * Return: 0 if big 0r 1 if little
 */
int get_endianness(void)
{
	int x = 1;
	int big_or_little;

	big_or_little = (int) (((char *)&x)[0]);
	return (big_or_little);
}

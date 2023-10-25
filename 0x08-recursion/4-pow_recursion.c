#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first parameter
 * @y: second parameter
 * Return: value of y multiplied
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

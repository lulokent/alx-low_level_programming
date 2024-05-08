#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to searcg for in the array
 *
 * Return: First index where vaalue is located,otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (i);
}

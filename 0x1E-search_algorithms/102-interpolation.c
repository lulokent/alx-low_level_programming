#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The vlaue to search for
 *
 * Return: the first index where value located in ,otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, begin = 0, end = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (1)
	{
		pos = begin + (((double)(end - begin) /
					(array[end] - array[begin])) * (value - array[begin]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			end = pos - 1;
		else
			begin = pos - 1;
	}
	return (-1);
}

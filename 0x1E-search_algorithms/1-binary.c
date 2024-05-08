#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of int
 * using the Binary Search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Numberof the elements in array
 * @value: Value to search for
 *
 * Return: First index where value is loacted ,otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, begin, end;

	if (array == NULL)
		return (-1);

	begin = 0;
	end = size - 1;

	while (begin <= end)
	{
		mid = (begin + end) / 2;
		printf("Searching in array: ");
		for (i = begin; i <= end; i++)
		{
			if (i != end)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] < value)
			begin = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

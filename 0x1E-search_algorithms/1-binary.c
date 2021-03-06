#include "search_algos.h"

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the index where value is located.
 * If value is not present in array or if array is NULL, must return -1.
 *
 * You can assume that array will be sorted in ascending order.
 * You can assume that value won’t appear more than once in array.
 * gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-binary.c -o 1-binary
 */
int binary_search(int *array, size_t size, int value)
{
	int start, end, i_middle, index;

	if (array == NULL || size < 1)
		return (-1);

	start = 0;
	end = (int)size - 1;

	while (start <= end)
	{
		for (index = start; index <= end; index++)
		{
			if (index == start)
				printf("Searching in array: ");
			printf("%d", array[index]);
			if (index != end)
				printf(", ");
		}
		printf("\n");

		i_middle = (start + end) / 2;

		if (array[i_middle] < value)
			start = i_middle + 1;
		else if (array[i_middle] > value)
			end = i_middle - 1;
		else
			return (i_middle);
	}
	return (-1);
}

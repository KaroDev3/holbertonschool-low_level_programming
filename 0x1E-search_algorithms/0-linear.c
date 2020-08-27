#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an
 * array of integers using the Linear search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 *
 * Return: the first index where value is located.
 * If value is not present in array or if array is NULL, must return -1.
 *
 * gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}

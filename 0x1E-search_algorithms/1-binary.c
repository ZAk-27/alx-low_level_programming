#include "search_algos.h"

/**
 * recurs_se - searching for value
 * integers using the Binary search algo
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int recurs_se(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return ((int)mid);

	if (value < array[mid])
		return (recurs_se(array, mid, value));

	mid++;

	return (recurs_se(array + mid, size - mid, value) + mid);
}

/**
 * binary_search 
 * the index of the number
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: number index
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recurs_se(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}

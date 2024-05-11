#include "search_algos.h"




/**
 * binary_recursive - Recursive approach for the binary search algorithm
 * @array: Pointer to the first position
 * @size: Length of the array
 * @value: Element to be searched
 * Return: Index of the value, or -1 if not found
 */
size_t binary_recursive(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t aux;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (aux = 0; aux < size; aux++)
		printf("%d%s", array[aux], (aux != size - 1) ? ", " : "\n");

	if (mid && size % 2 == 0)
		mid--;
	if (value == array[mid])
		return (mid);
	if (value < array[mid])
		return (binary_recursive(array, mid, value));

	mid++;
	return (binary_recursive(array + mid, size - mid, value) + mid);
}


/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer ti first position of array
 * @size: length of array
 * @value: value to search
 * Return: index of value in array
 */
int binary_search(int *array, size_t size, int value)
{
	int el;

	el = binary_recursive(array, size, value);

	if (el >= 0 && array[el] != value)
		return (-1);
	return (el);
}







100-jump.c


#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Implements the Jump search algorithm to
 * find a value in an array of integers
 *
 * @array: Input array
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the number, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}

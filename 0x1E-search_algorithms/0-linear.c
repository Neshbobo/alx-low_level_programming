#include "search_algos.h"

/**
* linear_search - Implement the linear search algorithm
* @array: Given array to search in
* @size: Size of the array
* @value: Value to search for
* Return: First index or -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
if (array == NULL)
{
return (-1);
}
for (size_t i = 0; i < size; i++)
{
printf("Comparing %d to %d\n", array[i], value);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}

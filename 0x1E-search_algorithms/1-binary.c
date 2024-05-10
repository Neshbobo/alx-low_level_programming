#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                using the binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if value is not present
 *         in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
  if (array == NULL || size == 0)
    {
      return -1;
    }

  size_t low = 0;
  size_t high = size - 1;

  printf("Searching in array: ");
  for (size_t i = low; i < high; i++)
    {
      printf("%d, ", array[i]);
    }
  printf("%d\n", array[high]);

  while (low <= high)
    {
      size_t mid = low + (high - low) / 2;

      if (array[mid] == value)
        {
	  return mid;
        }
      else if (array[mid] < value)
        {
	  low = mid + 1;
        }
      else
        {
	  high = mid - 1;
        }

      printf("Searching in array: ");
      for (size_t i = low; i < high; i++)
        {
	  printf("%d, ", array[i]);
        }
      printf("%d\n", array[high]);
    }

  return -1;
}

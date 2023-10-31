#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - Create an array of chars and initialize with a specific char.
* @size: Size of the array.
* @c: The character to initialize the array.
*
* Return: A pointer to the array, or NULL on failure.
*/
char *create_array(unsigned int size, char c)
{
char *arr = NULL;
if (size > 0)
{
arr = malloc(size);
if (arr)
while (size--)
arr[size] = c;
}
return (arr);
}

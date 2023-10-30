#include <stdlib.h>

/**
* create_array - Create array of chars and initialize with specific char.
* @size: Size of the array.
* @c: Character to initialize the array with.
*
* Return: Pointer to the array, or NULL if size is 0 or if allocation fails.
*/
char *create_array(unsigned int size, char c)
{
char *array = NULL;

if (size > 0)
{
array = malloc(size);
if (array != NULL)
{
for (unsigned int i = 0; i < size; i++)
array[i] = c;
}
}

return (array);
}

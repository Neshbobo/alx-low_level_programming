#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - Allocates memory for an array and initializes it to zero.
* @nmemb: Number of elements in the array.
* @size: Size in bytes of each element.
*
* Return: A pointer to the allocated and initialized memory or NULL on failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
return (NULL);

void* ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

memset(ptr, 0, nmemb * size);

return (ptr);
}


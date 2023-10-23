#include "main.h"
#include <stdio.h>

/**
* _memset - Fill memory with a constant byte
*
* @s: Pointer to the memory area to be filled
* @b: The constant byte to fill the memory with
* @n: Number of bytes to fill
*
* Return: A pointer to the memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;  /* Create a pointer to the start of the memory area */

/* Fill the first n bytes of memory with the constant byte b */
for (unsigned int i = 0; i < n; i++)
{
*ptr = b; /* Set the current byte to the constant byte 'b' */
ptr++;    /* Move the pointer to the next byte */
}

return (s); /* Return a pointer to the memory area 's' */
}

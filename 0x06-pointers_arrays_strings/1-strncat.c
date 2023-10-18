#include "main.h"
#include <stdio.h>

/**
* _strncat - Concatenate two strings with a limit.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n: Maximum number of bytes to use from src.
*
* Return: A pointer to the resulting string (dest).
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i = 0;

/* Calculate the length of the destination string */
while (dest[dest_len] != '\0')
dest_len++;

/* Copy up to 'n' bytes from the source string to the end of the destination string */
while (i < n && src[i] != '\0')
{
dest[dest_len] = src[i];
dest_len++;
i++;
}

/* Add a terminating null byte at the end of the concatenated string */
dest[dest_len] = '\0';

return (dest);
}







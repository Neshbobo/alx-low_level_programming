#include "main.h"
#include <stdio.h>

/**
* _strcat - Concatenate two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
*
* Return: A pointer to the resulting string (dest).
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int src_len = 0;

/* Calculate the length of the destination string */
while (dest[dest_len] != '\0')
dest_len++;

/* Copy the source string to the end of the destination string */
while (src[src_len] != '\0')
{
dest[dest_len] = src[src_len];
dest_len++;
src_len++;
}

/* Add the terminating null byte at the end of the concatenated string */
dest[dest_len] = '\0';

return (dest);
}

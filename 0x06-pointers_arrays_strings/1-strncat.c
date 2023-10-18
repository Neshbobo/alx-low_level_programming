#include "main.h"
#include <stdio.h>

/**
* _strncat - Concatenate two strings with a limit.
* @dest: Pointer to destination string.
* @src: Pointer to source string.
* @n: Maximum number of bytes from src to use.
*
* Return: A pointer to the resulting string (dest).
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i = 0;

while (dest[dest_len])
dest_len++;

while (i < n && src[i])
{
dest[dest_len] = src[i];
dest_len++, i++;
}

dest[dest_len] = '\0';

return (dest);
}





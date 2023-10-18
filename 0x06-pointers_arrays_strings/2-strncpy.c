#include "main.h"
#include <stdio.h>

/**
* _strncpy - Copy a string with a limit.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string.
* @n: Maximum number of bytes from src to copy.
*
* Return: A pointer to the resulting string (dest).
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}

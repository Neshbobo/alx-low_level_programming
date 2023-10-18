#include "main.h"
#include <stdio.h>

/**
* _strncpy - Copy a string with a limit.
* @dest: Pointer to destination string.
* @src: Pointer to source string.
* @n: Maximum number of bytes from src to copy.
*
* Return: A pointer to the resulting string (dest).
*/
char *_strncpy(char *dest, const char *src, int n)
{
int i;

/* Copy up to 'n' bytes from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

/* If n is not reached, pad the remaining space with null bytes */
while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}







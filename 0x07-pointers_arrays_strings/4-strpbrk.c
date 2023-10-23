#include "main.h"
#include <stdio.h>

/**
* _strspn - Get the length of a prefix substring.
* @s: The string to be checked.
* @accept: The characters to be matched.
*
* Return: Number of bytes in the initial segment of s containing only accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;

while (*s && strchr(accept, *s) != NULL)
{
len++;
s++;
}

return (len);
}

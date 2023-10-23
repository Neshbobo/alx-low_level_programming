#include "main.h"
#include <stdio.h>

/**
* _strstr - Locate a substring in a string.
* @haystack: String to search in.
* @needle: Substring to locate.
*
* Return: Pointer to the beginning of the located substring, or NULL if not found.
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack, *n = needle;

while (*haystack && *n && *haystack == *n)
{
haystack++;
n++;
}

if (!*n)
return (h);

haystack = h + 1;
}

return (NULL);
}


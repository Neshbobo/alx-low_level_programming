#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - Duplicates a string without using a for loop.
* @str: The string to duplicate.
*
* Return: A pointer to the duplicated string, or NULL on failure.
*/
char *_strdup(char *str)
{
if (str == NULL)
return (NULL);

int length = 0;
while (str[length] != '\0')
length++;

char *dup_str = (char *)malloc(length + 1);

if (dup_str == NULL)
return (NULL);

void copy(char *dest, char *src, int i)
{
dest[i] = src[i];
if (src[i] != '\0')
copy(dest, src, i + 1);
}

copy(dup_str, str, 0);
return (dup_str);
}


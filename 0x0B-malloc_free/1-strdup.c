#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - Duplicates a string.
* @str: The string to duplicate.
*
* Return: A pointer to the duplicated string, or NULL on failure.
*/
char *_strdup(char *str)
{
char *dup_str;
int length = 0;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

dup_str = (char *)malloc(length + 1);

if (dup_str == NULL)
return (NULL);

for (int i = 0; i <= length; i++)
dup_str[i] = str[i];

return (dup_str);
}


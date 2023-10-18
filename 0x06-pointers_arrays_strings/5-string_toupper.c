#include "main.h"
#include <stdio.h>

/**
* string_toupper - Convert all lowercase letters in a string to uppercase.
* @str: Pointer to the string to be modified.
*
* Return: A pointer to the modified string.
*/
char *string_toupper(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
/* Convert lowercase letter to uppercase */
str[i] = str[i] - ('a' - 'A');
}
i++;
}

return (str);
}

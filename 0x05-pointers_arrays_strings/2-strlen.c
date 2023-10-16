#include "main.h"
#include <stdio.h>

/**
* _strlen - Returns the length of a string.
*
* @s: A pointer to a string.
*
* This function takes a pointer to a string as a parameter and returns the
* length of the string (the number of characters in it) excluding the null
* terminator '\0'.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
int length = 0;

if (s != NULL)
{
while (*s != '\0')
{
length++;
s++;
}
}

(return length;)
}









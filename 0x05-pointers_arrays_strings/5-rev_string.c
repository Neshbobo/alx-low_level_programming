#include "main.h"
#include <stdio.h>

/**
* rev_string - Reverses a string.
*
* @s: A pointer to the string to be reversed.
*
* Description:
* This function takes a pointer to a string as a parameter and reverses the
* characters in the string in place.
*
* Return: None.
*/
void rev_string(char *s)
{
if (s != NULL)
{
int length = 0;

while (s[length] != '\0')
{
length++;
}

int start = 0;
int end = length - 1;
char temp;

while (start < end)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;

start++;
end--;
}
}
}


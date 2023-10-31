#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - Concatenates two strings without using for loops.
* @s1: The first string.
* @s2: The second string.
*
* Description: This function concatenates two strings by calculating their lengths
* and using a recursive approach to copy the characters. It returns a pointer to
* the concatenated string or NULL on failure.
*
* Return: A pointer to the concatenated string, or NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
if (!s1)
s1 = "";
if (!s2)
s2 = "";

int len1 = 0;
while (s1[len1])
len1++;

int len2 = 0;
while (s2[len2])
len2++;

char *concat_str = (char *)malloc(len1 + len2 + 1);

if (!concat_str)
return (NULL);
 

void copy(char *dest, char *src)
{
*dest = *src;
if (*src)
{
copy(dest + 1, src + 1);
}
}

copy(concat_str, s1);
copy(concat_str + len1, s2);
concat_str[len1 + len2] = '\0';

return (concat_str);
}

 

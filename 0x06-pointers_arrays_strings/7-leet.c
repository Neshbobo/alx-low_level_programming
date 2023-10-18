#include "main.h"
#include <stdio.h>

/**
* leet - Encode a string into "1337".
* @str: Pointer to the input string.
*
* Return: A pointer to the encoded string.
*/
char *leet(char *str)
{
int i, j;
char leet_chars[] = "aAeEoOtTlL";
char leet_codes[] = "44337711";

for (i = 0; str[i]; i++)
{
for (j = 0; leet_chars[j]; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_codes[j];
break;
}
}
}

return (str);
}







#include "main.h"

/**
* cap_string - Capitalize the first letter of each word in a string.
* @str: Pointer to the input string.
*
* Return: A pointer to the modified string.
*/
char *cap_string(char *str)
{
int i = 0, cap_next = 1;

while (str[i])
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
cap_next = 1;
else if (cap_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
cap_next = 0;
}
else
cap_next = 0;

i++;
}

return (str);
}







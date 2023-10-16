#include "main.h"

/**
* puts2 - Print every other character of a string, starting with the first character.
* @str: A pointer to the string to be processed.
*
* Description: This function takes a pointer to a string and prints every
* other character, starting with the first character, followed by a new line.
*/
void puts2(char *str)
{
if (str)
{
for (int i = 0; str[i]; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
}

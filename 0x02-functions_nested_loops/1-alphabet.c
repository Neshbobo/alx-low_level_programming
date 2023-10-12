#include <unistd.h>

/**
* print_alphabet - Prints the alphabet in lowercase followed by a new line.
*
* Description: This function prints the lowercase alphabet from 'a' to 'z'
* followed by a new line.
*/
void print_alphabet(void)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
}

/**
* _putchar - Write a character to the standard output (stdout).
* @c: The character to be written.
*
* Return: On success, returns 1. On error, returns -1.
*/
int _putchar(char c)
{
return write(1, &c, 1);
}





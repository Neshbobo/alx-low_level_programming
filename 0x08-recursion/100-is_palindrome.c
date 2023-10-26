#include "main.h"

/**
* is_palindrome - Checks if a string is a palindrome
* @s: The string to check
*
* Return: 1 if the string is a palindrome, 0 if it's not
*/
int is_palindrome(char *s)
{
int length = strlen(s);
if (length <= 1)
return (1);
return (check_palindrome(s, 0, length - 1));
}

/**
* check_palindrome - Helper function to check if a string is a palindrome
* @s: The string to check
* @start: The start index
* @end: The end index
*
* Return: 1 if the string is a palindrome, 0 if it's not
*/
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

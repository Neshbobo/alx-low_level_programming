#include <stdio.h>

/**
* print_name - Prints a name using a custom function.
* @name: The name to be printed.
* @f: A function pointer for printing the name.
*/
void print_name(char *name, void (*f)(char *))
{
/*
* Check if the provided name and function pointer are valid.
* If they are valid, call the custom printing function to print the name.
*/
if (name != NULL && f != NULL)
{
f(name);
}
}

#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - Prints a name
* @name: The name to be printed
* @f: A function pointer for printing
*/
void print_name(char *name, void (*f)(char *));

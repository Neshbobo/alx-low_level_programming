#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
* init_dog - Initializes a struct dog.
* @d: Pointer to the struct dog.
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
* main - Entry point
* Description: Initializes a struct dog using the init_dog function.
* Return: Always 0
*/
int main(void)
{
struct dog myDog;
init_dog(&myDog, "Buddy", 3.5, "John Doe");
return (0);
}



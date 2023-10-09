#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point of the program
*
* Return: Always 0 (success)
*/
int main(void)
{
int n;

/* Initialize the random number generator with the current time */
srand(time(0));

/* Generate a random number between INT_MIN and INT_MAX */
n = rand();

printf("The number %d is ", n);

if (n > 0)
{
printf("positive\n");
}
else if (n < 0)
{
printf("negative\n");
}
else
{
printf("zero\n");
}

return (0);
}








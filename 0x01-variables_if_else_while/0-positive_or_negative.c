include <stdio.h>
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

/* Generate a random number between -RAND_MAX and RAND_MAX */
n = rand() - RAND_MAX / 2;

printf("The number %d is ", n);

if (n > 0)
{
printf("%d is positive\n".n);
}
else if (n == 0)
{
printf("%d is zero\n".n);
}
else
{
printf("%d is negative\n".n);
}

return (0);
}

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

/* Generate a random number between -RAND_MAX and RAND_MAX */
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is ", n);

/* Get the last digit of n */
int lastDigit = abs(n) % 10;

printf("%d and is ", lastDigit);

if (lastDigit > 5)
{
printf("greater than 5\n");
}
else if (lastDigit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}

return (0);
}








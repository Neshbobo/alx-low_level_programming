#include <unistd.h>

/**
* main - Entry point of the program
*
* Description: This program prints "_putchar" followed by a new line and
* returns 0.
*
* Return: 0 (Success)
*/
int main(void)
{
char *message = "_putchar\n";

while (*message)
{
write(1, message, 1);
message++;
}

return (0);
}








#include "main.h"
#include <stdio.h>

/**
* print_buffer - Prints the content of a buffer.
* @b: Pointer to the buffer.
* @size: Number of bytes to print from the buffer.
*
* Description: This function prints the content of a buffer in a specific
* format: 10 bytes per line, each byte's position in hexadecimal, the byte
* in hexadecimal format, and the character representation. If a byte is not
* a printable character, a period (.) is printed.
*/
void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
printf("%02x", b[i + j]);
}
else
{
printf("  ");
}

if (j % 2 == 1)
{
printf(" ");
}
}

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
if (b[i + j] >= 32 && b[i + j] <= 126)
{
printf("%c", b[i + j]);
}
else
{
printf(".");
}
}
}

printf("\n");
}
}

int main()
{
char buffer[] = "This is a sample buffer for testing the print_buffer function.";
int size = sizeof(buffer);

print_buffer(buffer, size);
return 0;
}

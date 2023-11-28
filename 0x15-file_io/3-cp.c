#include "main.h"

/**
* main - Entry point of the program.
* @argc: The number of arguments.
* @argv: The array of arguments.
*
* Return: 0 on success, otherwise the corresponding error code.
*/
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_bytes, write_bytes, close_status;
char buffer[BUF_SIZE];

if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
if (fd_to == -1)
{
dprintf(2, "Error: Can't write to file %s\n", argv[2]);
close(fd_from);
exit(99);
}

while ((read_bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
{
write_bytes = write(fd_to, buffer, read_bytes);
if (write_bytes == -1)
{
dprintf(2, "Error: Can't write to file %s\n", argv[2]);
close(fd_from);
close(fd_to);
exit(99);
}
}

if (read_bytes == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
close(fd_from);
close(fd_to);
exit(98);
}

close_status = close(fd_from);
if (close_status == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

close_status = close(fd_to);
if (close_status == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_to);
exit(100);
}

return (0);
}



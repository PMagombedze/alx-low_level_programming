#include "main.h"
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char const *argv[])
{
unsigned int ch = 1024, f;
char buffer[1024];
int f_from, f_to;
int err;
if (argc != 3)
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);
f_to = open(argv[2], O_CREAT | O_WRONLY | O_APPEND, 0664);
f_from = open(argv[1], O_RDONLY);
if (f_from == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
if (f_to == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
for (; ch == 1024; )
	ch = read(f_from, buffer, 1024);
	if (ch == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	f = write(f_to, buffer, ch);
	if (f == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
err = close(f_from);
if (err == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
	exit(100);
err = close(f_to);
if (err == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
	exit(100);
return (0);
}


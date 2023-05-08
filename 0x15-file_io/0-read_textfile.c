#include "main.h"

/**
 * read_textfile - reads text file
 * @filename: file to be read
 * @letters: number of letters to read and print
 * 
 * Return: number of letters, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *text;
ssize_t bytes, op, rd;
if (filename == NULL)
{
return (0);
}
text = malloc(letters * sizeof(char));
if (text == NULL)
{
return (0);
}
op = open(filename, O_RDONLY);
rd = read(op, text, letters);
bytes = write(STDOUT_FILENO, text, rd);
if (bytes < 0 || rd < 0)
{
free(text);
return (0);
}
free(text);
close(op);
return (bytes);
}

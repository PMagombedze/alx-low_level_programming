#include "main.h"

/**
 * create_file - create file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 on success, 0 otherwise
 */
int create_file(const char *filename, char *text_content)
{
int fd, n = 0, w;
if (!filename)
{
return (-1);
}
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
if (!text_content)
{
text_content = "";
}
while (text_content[n])
{
n++;
}
w = write(fd, text_content, n);
if (w == -1)
{
return (-2);
}
close(fd);
return (1);
}

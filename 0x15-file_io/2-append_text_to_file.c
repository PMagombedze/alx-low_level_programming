#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
size_t count = 0;
int wr, op;
if (filename == NULL)
{
return (-1);
}
if (text_content !=NULL)
{
while (text_content[count])
{
count += 1;
}
}
op = open(filename, O_WRONLY | O_APPEND);
wr = write(op, text_content, count);
if ( wr == -1 || op == -1)
{
return (-1);
}
close(op);
return (1);
}


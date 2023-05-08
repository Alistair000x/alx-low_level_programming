#include "main.h"
/**
 * create_file - Create a function that creates a file
 * @filename: filename
 * @text_content: text_content
 * Return: if success 1 else -1
 */
int create_file(const char *filename, char *text_content)
{
unsigned int p = 0;
int h, o = 0;
if (!filename)
return (-1);
o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (o == -1)
return (-1);
if (text_content)
{
while (text_content[p] != '\0')
p++;
h = write(o, text_content, p);
if (h == -1)
return (-1);
}
close(o);
return (1);
}

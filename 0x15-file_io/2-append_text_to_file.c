#include "main.h"
/**
 * append_text_to_file - a function that append text at the end of a file
 * @filename: filename
 * @text_content: text_content
 * Return: 1 if success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, b = 0;
unsigned int p = 0;
if (!filename)
return (-1);
o = open(filename, O_APPEND | O_WRONLY);
if (o == -1)
return (-1);
if (text_content)
{
while (text_content[p] != '\0')
p++;
b = write(o, text_content, p);
if (b == -1)
return (-1);
}
close (o);
return (1);
}

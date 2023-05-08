#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: filename
 * @text_content: text_content
 * Return: 1 if success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int k, n = 0;
unsigned int m = 0;
if (!filename)
return (-1);
k = open(filename, O_APPEND | O_WRONLY);
if (k == -1)
return (-1);
if (text_content)
{
while (text_content[m] != '\0')
m++;
n = write(k, text_content, m);
if (n == -1)
return (-1);
}
close(k);
return (1);
}

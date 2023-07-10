#include "main.h"
/**
 * create_file - create a function that creates a file
 * @filename: filename
 * @text_content: text_content
 * Return: if success 1 else -1
 */
int create_file(const char *filename, char *text_content)
{
unsigned int j = 0;
int k, l = 0;
if (!filename)
return (-1);
l = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (l == -1)
return (-1);
if (text_content)
{
while (text_content[j] != '\0')
j++;
k = write(l, text_content, j);
if (k == -1)
return (-1);
}
close(l);
return (1);
}

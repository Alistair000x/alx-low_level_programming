#include "main.h"
/**
 * read_textfile - read and print
 * @filename: filename
 * @letters: letters
 *
 * Retrun: if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t a;
size_t b;
char *file;
int ali;
if (filename == NULL)
return (0);
ali = open(filename, O_RDONLY);
if (ali == -1)
return (0);
file = malloc(sizeof(char) * letters);
if (file == NULL)
return (0);
a = read(ali, file, letters);
b = write(STDOUT_FILENO, file, a);
close(ali);
free(file);
return (b);
}

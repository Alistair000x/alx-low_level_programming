#include "main.h"
/**
 * read_textfile - read and print
 * @filename: filename
 * @letters: letters
 * Return: if the file can not be open or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t c, b;
char *file;
int hiba;
if (filename == NULL)
return (0);
hiba = open(filename, O_RDONLY);
if (hiba == -1)
return (0);
file = malloc(sizeof(char) * letters);
if (file == NULL)
return (0);
c = read(hiba, file, letters);
b = write(STDOUT_FILENO, file, c);
close(hiba);
free(file);
return (b);
}

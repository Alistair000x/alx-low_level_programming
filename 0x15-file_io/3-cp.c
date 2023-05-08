#include "main.h"
#include <stdio.h>

/**
 * ali_file - checks if files can be opened
 * @filename: filename
 * @files: files
 * @argv: arguments
 * Return: no return
 */
void ali_file(int filename, int files, char *argv[])
{
if (filename == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (files == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
/**
 * main - check the code
 * @argc: nbers of argument
 * @argv: arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int filename, files, lame;
ssize_t l;
ssize_t j;
char bo[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
filename = open(argv[1], O_RDONLY);
files = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
ali_file(filename, files, argv);
l = 1024;
while (l == 1024)
{
l = read(filename, bo, 1024);
if (l == -1)
ali_file(-1, 0, argv);
j = write(files, bo, l);
if (j == -1)
ali_file(0, -1, argv);
}
lame = close(filename);
if (lame == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filename);
exit(100);
}
lame = close(files);
if (lame == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filename);
exit(100);
}
return (0);
}

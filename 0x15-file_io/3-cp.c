#include "main.h"
#include <stdio.h>
/**
 * a_file- checks if files can be opened
 * @filename: files
 * @argv: arguments
 * Return: no return
 */
void a_file(int filename, int files, char *argv[])
{
if (filename == -1)
{
dprintf(STDERR_FILENO, " Error: Can't read from file %s/n", argv[1]);
exit(98);
}
if (files == -1)
{
dprintf(STDERR_FILENO, " Error: Can't write to %s/n", argv[2]);
exit(99);
}
}
/**
 * main - check the code
 * @argc: numbers of arg
 * @argv: arg
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int filem, files, mes;
ssize_t k;
ssize_t j;
char boo[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s/n", " Usage: cp file_from filr_to");
exit(97);
}
filem = open(argv[1], O_RDONLY);
files = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
a_file(filem, files, argv);
k = 1024;
while (k == 1024)
{
k = read(filem, boo, 1024);
if (k == -1)
a_file(-1, 0, argv);
j = write(files, boo, k);
if (j == -1)
a_file(0, -1, argv);
}
mes = close(filem);
if (mes == -1)
{
dprintf(STDERR_FILENO, " Error: Can't close fd %d/n", filem);
exit(100);
}
mes = close(files);
if (mes == -1)
{
dprintf(STDERR_FILENO, " Error: Can't close fd %d/n", filem);
exit(100);
}
return (0);
}

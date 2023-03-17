#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
putchar(letter);
}
putchar('\n');

return (0);
}

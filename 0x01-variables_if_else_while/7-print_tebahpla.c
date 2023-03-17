#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ac;

for (ac = 'z'; ac >= 'a'; ac--)
{
putchar(ac);
}
putchar('\n');
return (0);
}


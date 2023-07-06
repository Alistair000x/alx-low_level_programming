#include "main.h"
/**
 * print_binary - print binary number
 * @n: uint to be converted to binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
unsigned long int cris = n;
int h = 0;
int y = 0;
int t = 0;
if (n == 0)
{
_putchar('0');
return;
}
for (t = sizeof(n) * 8 - 1; t >= 0; t--)
{
cris = n >> t;
h = (cris)&1;
if (h || y)
{
if (h)
_putchar('1');
else
_putchar('0');
y = 1;
}
}
}

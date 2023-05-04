#include "main.h"

/**
 * print_binary - prints binary number
 * @n: uint t be converted to binary
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
unsigned long int suii = n;
int y = 0;
int ista = 0;
int v = 0;
if (n == 0)
{
_putchar('0');
return;
}
for (v = sizeof(n) * 8 - 1; v >= 0; v--)
{
suii = n >> v;
y = (suii)&1;
if (y || ista)
{
if (y)
_putchar('1');
else
_putchar('0');
ista = 1;
}
}
}

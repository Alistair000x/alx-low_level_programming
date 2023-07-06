#include "main.h"
/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
int ab, binary;
unsigned int k;
if (b == NULL)
return (0);
k = 0;
for (ab = 0; b[ab] != '\0'; ab++)
;
for (ab--, binary = 1; ab >= 0; ab--, binary *= 2)
{
if (b[ab] != '0' && b[ab] != '1')
return (0);
if (b[ab] & 1)
k += binary;
}
return (k);
}

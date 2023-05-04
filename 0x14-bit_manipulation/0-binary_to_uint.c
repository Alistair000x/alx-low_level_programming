#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
int ab;
int binary;
unsigned int kiko;
if (b == NULL)
return (0);
kiko = 0;
for (ab = 0; b[ab] != '\0'; ab++);
for (ab--, binary = 1; ab >= 0; ab--, binary *= 2)
{
if (b[ab] != '0' && b[ab] != '1')
return (0);
if (b[ab] & 1)
kiko += binary;
}
return (kiko);
}
		

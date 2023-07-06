#include "main.h"
/**
 * clear_bit - clear a bit in given position
 * @n: number
 * @index: index of a number
 * Return: 1 if success, 0 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
long int s = 1;
if (index > 63)
return (-1);
s = ~(s << index);
*n &= s;
return (1);
}

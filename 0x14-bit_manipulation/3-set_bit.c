#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: number of index
 * Return: number with setted position
 */
int set_bit(unsigned long int *n, unsigned int index)
{
long int s = 1;
if (index > 63)
return (-1);
s <<= index;
*n |= s;
return (1);
}

#include "main.h"
/**
 * clear_bit - clears a bit in given position
 * @n: number
 * @index: index of a number
 * Return: 1 if success, 0 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
long int star = 1;
if (index > 63)
return (-1);
star = ~(star << index);
*n &= star;
return (1);
}

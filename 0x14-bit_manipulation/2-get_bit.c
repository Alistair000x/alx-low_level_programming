#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: the number
 * @index: index number
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
int kitty;
if (index > 63)
return (-1);
kitty = (n >> index & 1);
return (kitty);
}

#include "main.h"
/**
 * flip_bits - returns the number of bits u would need
 * to flip
 * @n: 1st number to compare
 * @m: 2nd number to compare
 * Return: the number of bits u would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int output = n ^ m;
int math = 0;
while (output)
{
math += output & 1;
output >>= 1;
}
return (math);
}

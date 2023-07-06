#include "main.h"
/**
 * get_endianness - check the endianness
 *
 * Return: 0 if bigendiann, else 1
 */
int get_endianness(void)
{
int h = 1;
char *t = (char *)&h;
if (*t)
return (1);
else
return (0);
}

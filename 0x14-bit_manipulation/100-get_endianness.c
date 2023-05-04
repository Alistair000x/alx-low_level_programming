#include "main.h"
/**
 * get_endianness - checks the endianess
 *
 * Return: 0 if big-endiann, else 1
 */
int get_endianness(void)
{
int y = 1;
char *a = (char *)&y;
if (*a)
return (1);
else
return (0);
}

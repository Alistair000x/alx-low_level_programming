#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Return: 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpor, 2015-10-19\n",
sizeof("and that piece of art is useful\" - Dora korpar, 2015-10-19"));
	return (1);
}

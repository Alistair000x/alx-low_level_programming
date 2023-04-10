#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 *        passed into it
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0;
	int a;

	while (i < argc)
	{
		a = i;
		i++;
	}
	printf("%d\n", a);
	return (0);
}

#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}


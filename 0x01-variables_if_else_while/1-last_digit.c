#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that assign a random number to a variable
 * Return: 0 on sucess
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = (n % 10);
	if ( l > 5)
	{
		printf("Last digit of %d is greater than 5\n", n);
	}
	else if (l < 6 && l != 0)
	{
		printf(" Last digit of %d is less than 6 and not 0\n", n);
	}
	else
	{
		 printf("Last digit of %d is 0\n", n);
	}
	return (0);
}

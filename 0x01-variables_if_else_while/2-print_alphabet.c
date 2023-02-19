#include <stdio.h>
/**
 * main - a program that print the alphabet
 *
 * Return: 0 on sucess
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

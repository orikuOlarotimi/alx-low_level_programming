#include "main.h"
/**
 * main - prints put char
 *
 * Return: Always 0
 */

int main(void)
{
	char ins[] = "_putchar";
 	int i = 0;

	while (ins[i] != '\0')
	{
		_putchar(ins[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

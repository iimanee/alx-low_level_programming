#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int var = 0;
	int o;

	while (*s != '\0')
	{
		var++;
		s++;
	}
	s--;
	for (o = var ; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

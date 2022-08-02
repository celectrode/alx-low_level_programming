#include "main.h"
/**
 * _puts - prints string
 *@str: A pointer to an int that will be changed
 *
 * Return: void - correct answer
 */

void _puts(char *str)
{
char *c;
int y;

c = str;
for (y = 0; c[y]; y++)
{
_putchar (c[y]);
}
_putchar('\n');
}

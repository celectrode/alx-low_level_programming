#include <stdio.h>

/**
 * main - A program that prints all base 16 number in lowercase
 * Return: 0
 */

int main(void)
{
int a;
char excel;
for (a = '0'; a <= '9'; a++)
putchar(a);
for (excel = 'a'; excel <= 'f'; excel++)
putchar(excel);
putchar('\n');
return (0);
}

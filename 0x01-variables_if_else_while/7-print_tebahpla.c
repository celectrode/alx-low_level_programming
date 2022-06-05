#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 * Return: 0
 */

int main(void)
{
    char excel;
    for (excel = 'z'; excel >= 'a'; excel--)
    putchar(excel);
    putchar('\n');
    return (0);
}

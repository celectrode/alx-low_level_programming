#include "main.h"

/**
 *_strlen - returns length of a string
 *@s: A pointer to an int that will be updated
 *
 * Return: void - correct answer
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}

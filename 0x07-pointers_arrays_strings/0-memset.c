#include "main.h"
/**
 *_memset - A function that fills memory with a constant byte
 *@b: A function that will be changed
 *@n: Bytes of the memory
 *@s: memory area
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int t;

for (t = 0; t < n; t++)
*(s + t) = b;

return (s);
}

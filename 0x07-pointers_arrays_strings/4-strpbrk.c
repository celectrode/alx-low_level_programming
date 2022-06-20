#include "main.h"
/**
 *_strpbrk - A function that searches a string for any of set of bytes
 *@s: string
 *@accept: bytes
 * Return: A pointer to the byte in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int r, t;

for (r = 0; *(s + r) != '\0'; r++)
{
for (t = 0; *(accept + t) != '\0'; t++)
{
if (*(s + r) == *(accept + t))
return (s + r);
}
}
return ('\0');
}

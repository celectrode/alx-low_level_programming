#include "main.h"
/**
 *_strspn - A function that gets the length of a prefix substring
 *@s: initial segment
 *@accept: bytes
 * Return: The number of bytes in s which consist of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int r, t, bool;

for (r = 0; *(s + r) != '\0'; r++)
{
bool = 1;
for (t = 0; *(accept + t) != '\0'; t++)
{
if (*(s + r) == *(accept + t))
{
bool = 0;
break;
}
}
if (bool == 1)
break;
}
return (r);
}

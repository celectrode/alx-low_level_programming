#include "main.h"
/**
 *_strchr - A function that locates a character in a string
 *@s: string
 *@c: character
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
unsigned int t = 0;
for (; *(s + t) != '\0'; t++)
if (*(s + t) == c)

return (s + t);

if (*(s + t) == c)
return (s + t);

return ('\0');
}

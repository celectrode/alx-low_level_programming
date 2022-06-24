#include "main.h"
/**
 *_memcpy - A function that copies memory area
 *@dest: destination
 *@src: source
 *@n: bytes from memory area
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int t;

for (t = 0; t < n; t++)
*(dest + t) = *(src + t);

return (dest);
}

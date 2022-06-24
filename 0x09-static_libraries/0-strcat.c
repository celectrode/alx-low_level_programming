#include "main.h"
/**
 *_strcat - A function that concatenates two strings
 *@dest: A pointer to a function that will be updated
 *@src: A pointer to a function that will be updated / changed
 * Return: dest
 */

char *_strcat(char *dest, char *src)

{
int m;
int n;

m = 0;
while (dest[m] != '\0')
{
m++;
}

n = 0;
while (src[n] != '\0')
{
dest[m] = src[n];
n++;
m++;
}
dest[m] = '\0';

return (dest);
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
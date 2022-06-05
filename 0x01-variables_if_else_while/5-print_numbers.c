#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Print numbers 0 to 9 on one line
 * Return: 0
 */
int main(void)

{
int a;
for (a = 0; a <= 9; a++)
{
printf("%d", a);
}
putchar('\n');
return (0);

}
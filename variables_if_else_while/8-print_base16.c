#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
char n;


for (n = '0' ; n <= '9' ; n++)
{
putchar(n);
}
for (c = 'a' ; c <= 'f' ; c++)
{
putchar (c);
}
printf("\n");
return (0);
}

#include<stdio.h>
/**
 * main - Alphabets except q and e
 *
 * Return: Always (Success)
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}

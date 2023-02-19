#include<stdio.h>
/**
 * main - Base 16
 *
 * Return: Always (Success)
 */
int main(void)
{
int i = '0';
char c = 'a';

while (i <= '9')
{
putchar(i);
i++;
}
while (c <= 'f')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

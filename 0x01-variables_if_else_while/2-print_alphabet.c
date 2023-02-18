#include<stdio.h>
/**
 * main - Print the alphabets
 *
 * Return: Always (Success)
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}


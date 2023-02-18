#include<stdio.h>
/**
 * main - Print the alphabets
 *
 * Return: Always (Success)
 */
int main(void)
{
char c = 'z';

while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}


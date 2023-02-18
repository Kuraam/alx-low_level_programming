#include<stdio.h>
/**
 * main - Alphabets except q and e
 *
 * Return: Always (Success)
 */
int main(void)
{
char c = 'a';

do {

if (c == 'p' || c == 'e') 
{
/* skip the iteration */
c++;
continue;
}
putchar(c);
c++;
}
while (c <= 'z');
{
putchar('\n');}

return (0);    
}

#include<stdio.h>
/**
 * main - Lower then Upper case
 *
 * Return: Always (Success)
 */
int main(void){
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
char m = 'A';

while (m <= 'Z')
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}

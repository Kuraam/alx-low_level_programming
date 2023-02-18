#include<stdio.h>
/**
 * main - Lower then Upper case
 *
 * Return: Always (Success)
 */
int main(void){
char c = 'a';
char m = 'A';

while (c <= 'z')
{
putchar(c);
c++;
}
while (m <= 'Z')
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}

#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet(void)
{
int i = 0;
int j;

while (i < 10)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
i++;
_putchar('\n');

}
}

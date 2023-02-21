#include "main.h"
/**
*print_alphabet - Make the alphabet
*Description: Making the aplhabet print lower case
*Return: void
*/

void print_alphabet(void)
{
char c;

for (c = 97; c < 123; c++)
{
_putchar(c);
}
_putchar ('\n');
}

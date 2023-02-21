#include "main.h"

/**
*print_alphabet_x10 - Make the alphabet print ten times
*Description: Making the aplhabet print lower case ten times
*Return: void
*/

void print_alphabet_x10(void)

{
char c;
int i = 0;

while (i <= 9)
{

for (c = 97; c < 123; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}

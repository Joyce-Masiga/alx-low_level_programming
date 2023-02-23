#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The number of times to print the diagonal line
 * Description: A function that draws a diagonal line on the terminal
 * Return:  empty
 */

void print_diagonal(int n)

{
int x, y;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for (y = 0; y < x; y++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}

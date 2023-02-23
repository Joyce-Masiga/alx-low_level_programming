#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 *@n: The number of line to draw
 * Description: A function that draws a straight line in the terminal
 * Return: empty
 */

void print_line(int n)

{
int x, n;

if (n <= 0)
{
_putchar('\n')
}
else
{
for (x = 0; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}
}


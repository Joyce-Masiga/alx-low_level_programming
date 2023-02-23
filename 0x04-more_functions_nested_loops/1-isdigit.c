#include "main.h"
/**
 * _isdigit - Checks if a character is a digit
 * @x: The number to be checked
 * Description: A function that checks for a digit o through to 9
 * Return: 1 for a character that will be a digit or 0 for any else
 */

int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}

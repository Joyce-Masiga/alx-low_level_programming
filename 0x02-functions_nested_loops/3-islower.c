#include "main.h"

/**
*_islower - Checks the lower case character
*@c: The character to be checked
*Description: It checks lower case character hence returns zero
*Return: 1 for lowercase character or 0 for anything else
*/

int _islower(int c)

{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}

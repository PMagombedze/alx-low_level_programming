#include "main.h"

/**
 *_isdigit - check if number is a digit
 *@c: variable to be checked
 *Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
{
return (1);
}
return (0);
}

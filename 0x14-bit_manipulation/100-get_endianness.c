#include "main.h"

/**
 * get_endianness - checks the endianness.
 * 
 * Return: void
 */
int get_endianness(void)
{
size_t i = 1;
char *p;
p = (char *) &i;
return ((int)*p);
}

#include "main.h"

/**
 * _strcmp - function to compare 2 strings
 * @s1: first string
 * @s2: second string to compare with
 * Return: 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int j;
for (i = 0; s1[i] == s2[i] && s1[i] != 0; i++)
{

}
j = s1[i] - s2[i];
return (j);
}

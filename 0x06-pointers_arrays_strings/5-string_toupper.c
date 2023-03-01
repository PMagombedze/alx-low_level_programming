#include "main.h"

/**
 * *string_toupper - fjnct to convert str to uppercase
 * @*: string pointer
 */

char *string_toupper(char *)
{
int i = 0;
for (i = 0; *[i] != 0; i++)
{
if (*[i] >= 97 && *[i] <= 122)
{
*[i] = *[i] - 32;
}
i++;
}
return (*);
}

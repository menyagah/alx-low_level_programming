#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: pointer to string else null.
 */

char *str_concat(char *s1, char *s2)
{
int s1_len, s2_len;
char *concat;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

s1_len = strlen(s1);
s2_len = strlen(s2);

concat = (char *) malloc(s1_len + s2_len + 2);
if (concat == NULL)
{
return (NULL);
}
strcpy(concat, s1);
strcpy(concat, " ");
strcpy(concat, s2);

return (concat);
}

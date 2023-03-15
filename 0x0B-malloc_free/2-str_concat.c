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
size_t len1, len2;
char *result;

if (!s1) s1 = "";
if (!s2) s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

result = malloc(len1 + len2 + 1);
if (!result)
{
return (NULL);
}
memcpy(result, s1, len1);
memcpy(result + len1, s2, len2);
result[len1 + len2] = '\0';

return (result);
}

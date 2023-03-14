#include <stdlib.h>
#include <string.h>

/**
 * _strdup - start of the function.
 * @str: The string to duplicate.
 *
 * Return: returns a pointer.
 */

char *_strdup(char *str)
{
char *dup;

if (str == NULL)
{
return (NULL);
}
dup = malloc(strlen(str) + 1);
if (dup == NULL)
{
return (NULL);
}
strcpy(dup, str);

return (dup);
}


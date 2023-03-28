#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * Concatenates two strings s1 and s2 up to n bytes
 * Returns a pointer to a newly allocated string
 * containing s1 followed by the first n bytes of s2
 * 
 * @param s1 The first string
 * @param s2 The second string
 * @param n The number of bytes to concatenate from s2
 * @return A pointer to the concatenated string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
unsigned int s1_len = strlen(s1);
unsigned int s2_len = strlen(s2);

if (n >= s2_len)
{
n = s2_len;
}
char *result = malloc(s1_len + n + 1);
if (result == NULL)
{
return NULL;
}
memcpy(result, s1, s1_len);
memcpy(result + s1_len, s2, n);
result[s1_len + n] = '\0';
return result;
}


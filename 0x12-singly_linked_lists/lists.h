#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <string.h>

/**
 * struct list_s - Singly linked list
 * @str: String (malloc'ed string)
 * @len: Length of the string
 * @next: Pointer to the next node
 *
 * Description: Singly linked list node structure.
 */
typedef struct list_s
{
char *str;
size_t len;
struct list_s *next;
} list_t;

#endif /* LISTS_H */


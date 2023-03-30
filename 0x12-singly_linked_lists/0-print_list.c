#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list_t list
 *
 * Return: the number of nodes in the list_t list
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        printf("[%d] ", h->len);
        if (h->str == NULL)
            printf("(nil)\n");
        else
            printf("%s\n", h->str);

        h = h->next;
        count++;
    }

    return (count);
}


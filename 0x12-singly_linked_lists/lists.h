#ifndef LISTS_H  // Corrected the header guard
#define LISTS_H

#include <stddef.h>  // Include for size_t

// Assuming list_t is defined elsewhere or included from another file
typedef struct list_s list_t;
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif // LISTS_H


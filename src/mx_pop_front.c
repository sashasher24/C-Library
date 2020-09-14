#include "libmx.h"

t_list *mx_create_node(void *data);

void mx_pop_front(t_list **head) {
    t_list *tmp = *head;
    tmp = tmp->next;
    free(*head);
    *head = tmp;
}

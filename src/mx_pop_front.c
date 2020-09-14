#include "libmx.h"

void mx_pop_front(t_list **head) {
    t_list *tmp = *head;
    tmp = tmp->next;
    free(*head);
    *head = tmp;
}

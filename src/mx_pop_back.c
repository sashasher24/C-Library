#include "libmx.h"

void mx_pop_back(t_list **head) {
    t_list *tmp = *head;
    while (tmp->next->next != NULL) {
        tmp = tmp->next;
    }
    free(tmp->next->next);
    tmp->next = NULL;
}

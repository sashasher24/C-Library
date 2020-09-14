#include "libmx.h"

t_list *mx_create_node(void *data);

void mx_push_back(t_list **list, void *data) {
    t_list *ln = mx_create_node(data);
    t_list *temp1 = *list;
    while (temp1->next != NULL) {
        temp1 = temp1->next;
    }
    temp1->next = ln;
}

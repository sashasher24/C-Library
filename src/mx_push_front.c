#include "libmx.h"

t_list *mx_create_node(void *data);

void mx_push_front(t_list **list, void *data) {
    t_list *fn = mx_create_node(data);
    fn->next = *list;
    *list = fn;
}

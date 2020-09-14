#include "libmx.h"

t_list *mx_create_node(void *data);

int mx_list_size(t_list *list) {
    t_list *tmp = list;
    int i = 0;
    while (tmp!= NULL) {
        tmp = tmp->next;
        i++;
    }
    return i;
}

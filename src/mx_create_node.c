#include "libmx.h"

t_list *mx_create_node(void *data) {
    t_list *nw = malloc(sizeof(t_list));
    nw->data = data;
    nw->next = NULL;
    return nw;
}

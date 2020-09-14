#include "libmx.h"

void printlist(t_list *head) {
    t_list *tmp = head;
    while (tmp != NULL) {
//        printf("%s ", tmp->data);
        tmp = tmp->next;
    }
}


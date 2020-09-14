#include "libmx.h"


//bool comp(void* a, void* b) {
//    if(a > b) return true;
//    else return false;
//}

t_list *mx_sort_list(t_list *lst, bool(*cmp)(void*, void*)) {
    t_list *tmp;
    t_list *tmpp;

    if(lst != NULL) {
        for (tmp = lst; tmp != NULL; tmp = tmp->next) {
            for (tmpp = tmp->next; tmpp != NULL; tmpp = tmpp->next) {
                if (cmp(tmp->data, tmpp->data) == true) {
                    void *t = tmp->data;
                    tmp->data = tmpp->data;
                    tmpp->data = t;
                }
            }
        }
    }
    return lst;
}

//int main()
//{
//    t_list *temp;
//    t_list *head = NULL;
//
//    temp = mx_create_node("15");
//    head = temp;
//    temp = mx_create_node("48");
//    temp->next = head;
//    head = temp;
//    temp = mx_create_node("5");
//    temp->next = head;
//    head = temp;
//
//    mx_printlist(head);
//
//    mx_sort_list(head, comp);
//
//    printlist(head);
//
//    printf("\n\n%d", comp("5", "15"));
//
//    return 0;
//}

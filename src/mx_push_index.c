#include "libmx.h"

void mx_push_index(t_list **list, void *data, int index){

    if(index < 0) {
        mx_push_front(list, data);
    }
    else if (index > mx_list_size(*list)) {
        mx_push_back(list, data);
    }
    else {
        t_list *pi = *list;
    
        for(int i = 0; i < index - 1; i++){
            pi = pi->next;
        }
        t_list *kl = mx_create_node(data);
        kl->next = pi->next;
        pi->next = kl;
    }
}

//int plus(t_list *node) {
//    return node->data = "hhh";
//}

//int main()
//{
//    t_list *temp;
//    t_list *head = NULL;
//    
//    temp = mx_create_node("32");
//    head = temp;
//    temp = mx_create_node("8");
//    temp->next = head;
//    head = temp;
//    temp = mx_create_node("5");
//    temp->next = head;
//    head = temp;
//
//    // mx_foreach_list(head, plus);
//    mx_push_index(&head, "7", -2);
//    mx_push_index(&head, "27", 25);
//    
//    printlist(head);
//    
//    return 0;
//}

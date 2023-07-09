#include <stdlib.h>

typedef struct linked_list {
    int data;
    struct linked_list* next;
} t_list;

t_list* ft_linked_list_reverse(t_list* head) {
    t_list* prev = NULL;
    t_list* current = head;
    t_list* next = NULL;
    while (current != NULL) {
        next = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
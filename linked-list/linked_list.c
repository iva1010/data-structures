#include <stdio.h>
#include <malloc.h>
typedef struct Node {
    int x;
    struct Node* next;
} Node;

int main(void){
    Node root;
    root.x = 12;
    root.next = malloc(sizeof(Node));
    root.next->x = -23;
    root.next->next = malloc(sizeof(Node));
    root.next->next->x = 2323;
    root.next->next->next = NULL;

    printf("First = %d\n", root.x);
    printf("Second = %d\n", root.next->x);

    Node* curr = &root;
    
    while (curr != NULL) {
        printf("%d\n", curr -> x);
        curr = curr->next;
    }
    free(root.next->next); 
    free(root.next);    
    return 0;
}

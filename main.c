#include <stdio.h>
#include <malloc.h>

struct node {
    void *data;
    struct node *pnt_next;
    struct node *pnt_prev; 
};

//Node init
struct node *init(int f_data) {
    struct node *root;
    root = (struct node*)malloc(sizeof(struct node));
    root -> data = f_data;
    root -> pnt_next = NULL;
    root -> pnt_prev = NULL;
    return (root);
}

struct node *add_node(struct node *root, int num) {
    struct node *temp, *ptr;
    temp = (struct node*)malloc(sizeof(struct node));

}

int main() {

}

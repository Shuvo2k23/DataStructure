#include<stdio.h>
#include<stdlib.h>
typedef struct node* nodeptr;
struct node{
    int data;
    nodeptr next;
};
nodeptr start = NULL;

void traverse(nodeptr head){
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->next;
    }
}
nodeptr alloc(int value){
    nodeptr a = (nodeptr)malloc(sizeof(struct node));
    a->data = value;
    a->next = NULL;
    return a;
}

int main(){
    printf("Enter number of element\n");
    int n;
    scanf("%d",&n);
    printf("Enter %d elements\n", n);
    int a;
    scanf("%d",&a);
    nodeptr start = alloc(a);
    nodeptr head = start;
    n--;
    while(n--){
        scanf("%d",&a);
        nodeptr tmp = alloc(a);
        head->next = tmp;
        head = tmp;
    }
    traverse(start);
    // traverse(start);
    return 0;
}
#include<bits/stdc++.h>

using namespace std;
#define ll long long

typedef struct node *newptr;
struct node
{
   int value;
   struct node *next;
};
newptr build(){
    newptr x = (struct node*) malloc(sizeof(newptr));
    return x;
}
void print(newptr z){
    newptr tmp = z;
    while(tmp!=NULL){
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
}
void addFirst(newptr head,int val){
    newptr tmp = build();
    tmp->value = val;
    tmp->next = NULL;
    if(head == NULL){
        head = tmp;
        return;
    }
    tmp->next = head;
    head = tmp;
    
}
int main(){
    newptr  head = NULL;
    addFirst(head,12);
    print(head);
    return 0;
}
/*
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░█████░░█░░░░█░█░░░░█░█░░░░░█░░░███░░░░░░
░░░░░██░░░██░█░░░░█░█░░░░█░█░░░░░█░░█░░░█░░░░░
░░░░░█░░░░░░░█░░░░█░█░░░░█░██░░░██░░█░░░█░░░░░
░░░░░███████░██████░█░░░░█░░█░░░█░░░█░░░█░░░░░
░░░░░░░░░░░█░█░░░░█░█░░░░█░░░█░█░░░░█░░░█░░░░░
░░░░░██░░░██░█░░░░█░██░░██░░░█░█░░░░█░░░█░░░░░
░░░░░░█████░░█░░░░█░░████░░░░░█░░░░░░███░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
*/
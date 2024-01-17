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
void addFirst(newptr *head,int val){
    newptr tmp = build();
    tmp->value = val;
    tmp->next = NULL;
    if(*head == NULL){
        *head = tmp;
        return;    }
    tmp->next = *head;
    *head = tmp;
    
}
void addLast(newptr *head,int val){
    newptr tmp = build();
    tmp->value = val;
    tmp->next = NULL;
    if(*head == NULL){
        *head = tmp;
        return;
    }
    newptr z = *head;
    while(z->next!=NULL){
       z = z->next;
    }
    z->next = tmp;  
}
void addAt(newptr *head,int pos, int val){
    newptr tmp = build();
    tmp->value = val;
    tmp->next = NULL;
    if(pos <= 1){
        tmp->next = *head;
        *head = tmp;
        return;
    }
    int c =1;
    newptr z = *head;
    while(c<pos-1){
       z = z->next;
       c++;
    }
    tmp->next = z->next;
    z->next = tmp;  
}
void delVal(newptr *head, int val){
    newptr tmp = *head;
    if(tmp->value == val){
       *head = tmp->next;
        return;
    }
    newptr previous = tmp;
    tmp = tmp->next;
    while(tmp!=NULL){
        if(tmp->value == val){
            previous->next = tmp->next;
            return;
        }
        previous = tmp;
        tmp = tmp->next;
    }
}
int main(){
    // newptr a = (struct node*) malloc(sizeof(struct node));
    // newptr b = (struct node*) malloc(sizeof(struct node));
    // newptr c = (struct node*) malloc(sizeof(struct node));
    // newptr d = (struct node*) malloc(sizeof(struct node));
    //using build function 
    // newptr a = build();
    // newptr b = build();
    // newptr c = build();
    // newptr d = build();
    // a->value = 10;
    // b->value = 20;
    // c->value = 30;
    // a->next = b;
    // b->next = c;
    // c->next = NULL;
    // d = a;
    // print(d);
    // while(d!=NULL){
    //     cout<<d->value<<" ";
    //     d = d->next;
    // }
    newptr head =  NULL;
    // addFirst(&head,11111);
    // addFirst(&head,243);
    // addFirst(&head,12);
    
    // addFirst(&head,222);
    // addLast(&head,69);
    vector<int>v ={12,123,43,21,53};
    for(int x:v){
        // cout<<x<<" ";
        addLast(&head,x);
    }
    addAt(&head, 5, 50);
    delVal(&head,4);
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
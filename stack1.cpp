#include<bits/stdc++.h>
using namespace std;
//maxSize is size of stack
const int maxSize = 2;
int arr[maxSize+1] = {0};
int index = 0;
void push(int value){
    if(index==maxSize){
        cout<<"Stack_over_flow\n";
        return;
    }
    index++;
    arr[index] = value;
}
int pop(){
    if(index==0){
        cout<<"Stack_under_flow\n";
        return -1;
    }
    return arr[index--];
}

int main(){
    push(12);
    push(143);
    push(111);
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    return 0;
}
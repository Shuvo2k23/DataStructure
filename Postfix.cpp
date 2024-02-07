#include<bits/stdc++.h>
using namespace std;

const int maxSize = 500;
double arr[maxSize+1] = {0};
int index = 0;
void push(double value){
    if(index==maxSize){
        cout<<"Stack_over_flow\n";
        return;
    }
    index++;
    arr[index] = value;
}
double pop(){
    if(index==0){
        cout<<"Stack_under_flow\n";
        return -1;
    }
    return arr[index--];
}

double calPost(string s){
    s= s+")";
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            string num = "";
            while(s[i]>='0' && s[i]<='9'){
                num+=s[i];
                i++;
            }
            i--;
            double number = (double)stoi(num);
            // cout<<number<<" ";
            push(number);
        }
        else if(s[i]=='+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            double b = pop();
            double a = pop();
            
            if(s[i]=='+')
            push(a+b);
            else if(s[i] == '-')
            push(a-b);
            else if(s[i] == '*')
            push(a*b);
            else if(s[i] == '/')
            push(a/b);
        }
        

    }
    return (double)pop();
    // return 0;
}

int main(){
    string postfix ;
    getline(cin,postfix);
    // cout<<postfix<<endl;
    cout<<calPost(postfix);
    return 0;
}
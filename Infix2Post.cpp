#include<bits/stdc++.h>
using namespace std;

const int stackSize =500;
char st[stackSize+1];
int c = 0;
void push(char value){
    if(c ==stackSize) {
        cout<<"Stack_over_flow\n";
        return;
    }
    c++;
    st[c] = value;
}
char pop(){
    if(c==0){
        cout<<"Stack_under_flow\n";
        return -1;
    }
    return st[c--];
}
string inToPost(string s){
    string p = "";
    push('(');
    s=s+')';
    int n = s.length();
    for(int  i=0;i<n;i++){
        // cout<<s[i]<<" ";
        // //
        // for(int j =1;j<=c;j++)
        // cout<<st[j];
        // cout<<endl;
        if(s[i]<='Z' && s[i]>='A')
        p = p+s[i];

        else if(s[i]!=' ' || s[i] != ','){
            if(s[i]=='^')
            push(s[i]);
            else if(s[i]=='*' || s[i] == '/'){
                while(st[c]=='^' || st[c] == '*' || st[c]== '/'){
                    p = p + pop();
                }
                push(s[i]);
            }
            else if(s[i]=='+' || s[i] == '-'){
                while(st[c]=='^' || st[c] == '*' || st[c]== '/' || st[c] == '+' || st[c]== '-'){
                    p = p + pop();
                }
                push(s[i]);
            }
             else if(s[i] == '('){
                push(s[i]);
            }
            else if(s[i]==')'){
                while(st[c]!='('){
                    // cout<<st[c]<<" ";
                    p = p + pop();
                }
                pop();
            }
           
           
        }
    }
    return p;

}

int main(){
    string in = "A + ( B * C - ( D / E ^ F ) * G ) * H";
    // string in = "C * (A + B )";
    cout<<endl<<inToPost(in);
    
    return 0;
}
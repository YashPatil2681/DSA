#include<iostream>
using namespace std;
#define size 6
class Stack{
    string arr[size];
    public:
    int top;
    Stack();
    bool is_Empty();
    bool is_Full();
    void Push(string);
    string Pop();
    void print();
    void ReverseStack();
};

Stack::Stack(){
    top = -1;
}

bool Stack::is_Empty(){
    if( top == -1 ){
        return true;
    }
    else{
        return false;
    }
}

bool Stack::is_Full(){
    if( top == size-1 ){
        return true;
    }
    else{
        return false;
    }
}

void Stack::Push(string val){
    if(is_Full()){
        cout<<"\nAbove stack is empty :- ";
    }
    else{
        top++;
        arr[top] = val;
    }
}

void Stack::ReverseStack(){
    int j1 = 0;
    int j2 = top;
    while(j1 < j2){
        string temp = arr[j1];
        arr[j1] = arr[j2];
        arr[j2] = temp;
        j1++;
        j2--;
    }
}

void Stack::print(){
    if(is_Full()){
        cout<<"\nStack is OVER-FLOW ";
    }
    else{
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}



int main(){
    Stack S;
    S.Push("qw");
    S.print();
    S.Push("aw");
    S.Push("bs");
    S.Push("cs");
    S.print();
    S.ReverseStack();
    S.print();
    return 0;
}
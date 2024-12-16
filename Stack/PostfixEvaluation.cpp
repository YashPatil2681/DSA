#include<iostream>
#define capacity 10
using namespace std;

class Stack{
    int arr[capacity];
    int top;
    public:
    void insert(int);
    int pop();
    bool isEmpty();
    bool isFull();
    int TOP();
    bool isOperator();
    string infixTopostfix(string);
    int precedence(char);
};

bool Stack::isEmpty(){
    return top == -1;
}

bool Stack::isFull(){
    return top == capacity-1;
}

int Stack::TOP(){
    return arr[top];
}

void Stack::insert(int m){
    if(isFull()){
        cout<<"\nstack is OVER-FLOW :- ";
    }
    else{
        top++;
        arr[top] = m;
    }
}

int Stack::pop(){
    int t;
    if( isEmpty()){
        cout<<"\nstack is UNDER-FLOW :- ";
        return 0;
    }
    else{
        t = arr[top];
        top--;
    }
    return arr[top];
}

int Stack::precedence(char ch){
    if(ch == '+' || ch == '-'){        
        return 1;
    }
    else if( ch == '*' || ch == '/'){
        return 2;
    }
    return 0;
}

string Stack::infixTopostfix(string infix){
    int i = 0;
    string postfix = "";
    while( infix[i] != '\0'){
        if( !isOperator() ||)
    }
}

int main(){
    
}
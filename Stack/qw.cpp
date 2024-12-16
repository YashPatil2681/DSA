#include<iostream>
#define size 10
using namespace std;

class Stack{
    int arr[size];
    int top;
    public:
    Stack();
    void insert(int);
    int pop();
    bool isEmpty();
    bool isFull();
    int precedence(char);
    string infixTopostfix(string);
    bool isOperator(char);
};

Stack::Stack(){
    top = -1;
}

bool Stack::isEmpty(){
    return top == -1;
}

bool Stack::isFull(){
    return top == size-1;
}

void Stack::insert(int val){
    if( isFull() ){
        cout<<"\nstack is OVER-FLOW :- ";
        return ;
    }
    else{
        top ++;
        arr[top] = val;
    }
}

int Stack::pop(){
    int val;
    if( isEmpty() ){
        cout<<"\nstack is UNDER-FLOW :- ";
        return 0;
    }
    else{
        val = arr[top];
        top--;
    }
    return val;
}

int Stack::precedence(char op){
    if(op == '+' || op == '-'){   return 1;       }
    else if( op == '*' || op == '*' ){    return 2;      }
}

bool Stack::isOperator(char ch){
    return ( ch == '+' || ch == '-' || ch == '*' || ch == '/'); 
}

string Stack::infixTopostfix(string infix){
    string postfix = "";
    for( int i=0;infix[i] != '\0';i++ ){
        if( !isOperator(infix[i]) && infix[i] != '('  && infix[i] != ')'){
            postfix += infix[i];
        }
        else if( infix[i] == '('){
            postfix += 
        }
    }
}

int main(){
    
}
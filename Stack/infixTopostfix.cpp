#include<iostream>
#define size 100
using namespace std;

class Stack{
    int arr[size];
    int top;
    public:
    Stack();
    void push(char);
    char pop();
    char peek();
    bool isEmpty();
    bool isFull();
    int precedence(char);
    string infixToPostfix(string );
    bool isOperator(char);
};

Stack::Stack(){
    top = -1;
}

bool Stack::isEmpty(){
    return top == -1;
}

bool Stack::isFull(){
    return top == size - 1;
}

void Stack::push(char n){
    if (isFull()){
        cout << "\nStack is overloaded.";
    }
    else{
        top++;
        arr[top] = n;
    }
}

char Stack::pop(){
    if (isEmpty()){
        cout << "\nStack is underflow.";
        return '\0';
    }
    else {
        return arr[top--];
    }
}

char Stack::peek(){
    return arr[top];
}

int Stack::precedence(char op){
    if (op == '+' || op == '-'){
        return 1;
    }
    else if (op == '*' || op == '/'){
        return 2;
    }
    return 0;
}

bool Stack::isOperator(char ch){
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

string Stack::infixToPostfix(string infix){
    string postfix = "";
    int i = 0;

    while ( infix[i]  != '\0'){
        if( !isOperator(infix[i]) && infix[i] != '(' && infix[i] != ')'){
            postfix += infix[i];
        }
        else if( infix[i] == '('){
            push(infix[i]);
        }
        else if( infix[i] == ')'){
            while (!isEmpty() && infix[i] == '('){
                postfix += pop();
            }
            pop();
        }
        else{
            while( !isEmpty() && precedence(infix[i]) <= precedence(peek())){
                postfix += pop();
            }
            push(infix[i]);
        }
        i++; 
    }
    while( !isEmpty()){
        postfix += pop();
    }
    return postfix;
}

int main(){
    Stack s;
    string infix;
    cout<<"\nEnter infix :- ";
    cin>>infix;
    cout<<s.infixToPostfix(infix);
    return 0;
}
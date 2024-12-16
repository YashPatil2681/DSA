#include<iostream>
#include<string>
#define Size 10 // Defining the maximum size of the stack
using namespace std;

class Stack{
    int arr[Size]; // Array to hold stack elements
    int top; // Index of the top element
    public:
    Stack(); // Constructor
    void push(int); // Push element onto stack
    bool isEmpty(); // Check if stack is empty
    bool isFull(); // Check if stack is full
    int pop(); // Pop element from stack
    int Top(); // Return the top element of stack
    void Print(); // Print stack elements
    int precedence(char); // Return operator precedence
    bool isOperator(char); // Check if a character is an operator
    string InfixToPostfix(string); // Convert infix to postfix
    string InfixToPrefix(string); // Convert infix to prefix
    int postfixEvaluation(string); // Evaluate postfix expression
    int prefixEvaluation(string); // Evaluate prefix expression
};

// Constructor to initialize stack top
Stack::Stack(){
    top = -1;
}

// Check if the stack is empty
bool Stack::isEmpty(){
    return top == -1;
}

// Check if the stack is full
bool Stack::isFull(){
    return top == Size -1;
}

// Return the top element of the stack
int Stack::Top(){
    return arr[top];
}

// Push element onto the stack
void Stack::push(int t){
    if( isFull() ){
        cout<<"\nstack is OVER-FLOW :- "; // Error if stack is full
    }
    else{
        top++;
        arr[top] = t; // Push element
    }
}

// Check if the character is an operator
bool Stack::isOperator(char op){
    return ( op == '/' ||  op == '*' || op == '+' || op == '-');
}

// Pop the top element from the stack
int Stack::pop(){
    int t;
    if( isEmpty()){
        cout<<"\nstack is UNDER-FLOW :- "; // Error if stack is empty
        return 0;
    }
    else{
        t = arr[top];
        top--; // Decrease top pointer
    }
    return t;
}

// Return precedence of operators
int Stack::precedence(char ch){
    if( ch == '+' || ch == '-' ){  return 1;  } // Low precedence
    else if( ch == '*'  || ch == '/' ) { return 2; } // High precedence
    return 0;
}

// Convert infix expression to postfix
string Stack::InfixToPostfix(string infix){
    int i = 0;
    string postfix = "";
    while( infix[i] != '\0'){
        // If not an operator or parentheses, add to postfix
        if( !isOperator(infix[i]) && infix[i] != '(' && infix[i] != ')'){
            postfix += infix[i];
        }
        else if( infix[i] == '('){ // Push left parentheses
            push(infix[i]);
        }
        else if( infix[i] == ')'){ // Pop to postfix until '('
            while( !isEmpty() && Top() == '('){
                postfix += pop();
            }
            pop(); // Remove '(' from stack
        }
        else{
            // Pop operators with higher or equal precedence
            if( !isEmpty() && precedence(infix[i]) <= precedence(Top())){
                postfix += pop();
            }
            push(infix[i]); // Push current operator
        }
        i++;
    }
    // Pop remaining operators in stack
    while( !isEmpty()){
        postfix += pop();
    }
    return postfix;
}

// Reverse the given string
string reverseString(string infix){
    int n = infix.size();
    char temp;
    for( int i = 0; i < (n/2); i++ ){
        temp = infix[i];
        infix[i] = infix[n-i-1];
        infix[n-i-1] = temp; // Swap characters
    }
    return infix;
}

// Convert infix expression to prefix
string Stack::InfixToPrefix(string infix){
    string Infix = reverseString(infix); // Reverse infix expression
    string prefix = "";
    int i = 0;
    while( infix[i] != '\0'){
        // If not an operator or parentheses, add to prefix
        if( !isOperator(infix[i]) && Infix[i] != ')' && Infix[i] != '('){
            prefix += Infix[i];
        }
        else if(Infix[i] == ')'){ // Push right parentheses
            push(Infix[i]);
        }
        else if(Infix[i] == '('){ // Pop until ')'
            if( !isEmpty() && Top() == ')'){
                prefix += pop();
            }
            pop(); // Remove ')'
        }
        else{
            // Pop operators with lower precedence
            if( !isEmpty() && precedence(Infix[i]) < precedence(Top())){
                prefix += pop();
            }
            push(Infix[i]); // Push current operator
        }
        i++;
    }
    // Pop remaining operators
    if( !isEmpty()){
        prefix += pop();
    }
    return reverseString(prefix); // Reverse back to get prefix
}

// Perform the given operation on two values
int operation(int v1,int v2,char ch){
    switch(ch){
        case '+':
            return v1 + v2;
        case '-':
            return v1 - v2;
        case '/':
            if( v2 == 0){
                cout<<"\nv2 == 0 we can not divide :- "; // Check division by zero
                return 0;
            }
            return v1 / v2;
        case '*':
            return v1 * v2;
        default:
            cout<<"\nyou entered wrong choice :- "; // Invalid operator
    }
}

// Evaluate a postfix expression
int Stack::postfixEvaluation(string infix){
    int i = 0;
    while( infix[i] != '\0'){
        if(!isOperator(infix[i])){
            push(infix[i]-'0'); // Push operand onto stack
        }
        else{
            int v1 = pop();
            int v2 = pop();
            int res = operation(v2,v1,infix[i]); // Perform operation
            push(res); // Push result back to stack
        }
        i++;
    }
    if( top == -1){
        return 0;
    }
    else{
        return arr[top]; // Return final result
    }
}

// Evaluate a prefix expression
int Stack::prefixEvaluation(string m){
    for( int i = m.size()-1; i>=0 ;i-- ){
        if( !isOperator(m[i])){
            push(m[i] - '0'); // Push operand onto stack
        }
        else{
            int v1 = pop();
            int v2 = pop();
            int res = operation(v1,v2,m[i]); // Perform operation
            push(res); // Push result back to stack
        }
    }
    if( top == -1){
        return -1;
    }
    else{
        return arr[top]; // Return final result
    }
}

int main(){
    Stack s;
    int ch;
    string exp;
    string Postfix;
    string Prefix;
    do{
        cout<<"\n1.infix to postfix :- ";
        cout<<"\n2.infix to prefix  :- ";
        cout<<"\n3.postfix evaluation :- ";
        cout<<"\n4.prefix evaluation :- ";
        cout<<"\n5.Exit !!!! ";
        cout<<"\nEnter your choice :- ";
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"\nEnter exp :- ";
                cin>>exp;
                Postfix = s.InfixToPostfix(exp); // Convert infix to postfix
                cout<<"\ninfix to postfix :- "<<Postfix;
                break;
            }

            case 2:{
                cout<<"\nEnter exp :- "; // Input expression for prefix conversion
                cin>>exp;
                Prefix = s.InfixToPrefix(exp); // Convert infix to prefix
                cout<<"\ninfix to prefix :- "<<Prefix;
                break;
            }

            case 3:{
                int r1 = s.postfixEvaluation(Postfix); // Evaluate postfix
                cout<<"\npostfix evaluation :- "<<r1;
                break;
            }

            case 4:{
                int r2 = s.prefixEvaluation(Prefix); // Evaluate prefix
                cout<<"\nprefix evaluation :- "<<r2;
                break;
            }

            default:
                cout<<"\nyou entered wrong choice :- ";
        }
    }while(ch != 5); // Loop until user chooses to exit
    return 0;
}

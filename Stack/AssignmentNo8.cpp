#include<iostream>
#include<string>
#define Size 10
using namespace std;

class Stack{
    int arr[Size];
    int top;
    public:
    Stack();
    void push(int);
    bool isEmpty();
    bool isFull();
    int pop();
    int Top();
    void Print();
    int precedence(char);
    bool isOperator(char);
    string InfixToPostfix(string);
    string InfixToPrefix(string);
    int postfixEvaluation(string);
    int prefixEvaluation(string);
};

Stack::Stack(){
    top = -1;
}

bool Stack::isEmpty(){
    return top == -1;
}

bool Stack::isFull(){
    return top == Size -1;
}

int Stack::Top(){
    return arr[top];
}

void Stack::push(int t){
    if( isFull() ){
        cout<<"\nstack is OVER-FLOW :- ";
    }
    else{
        top++;
        arr[top] = t;
    }
}

bool Stack::isOperator(char op){
    return ( op == '/' ||  op == '*' || op == '+' || op == '-');
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
    return t;
}

int Stack::precedence(char ch){
    if( ch == '+' || ch == '-' ){  return 1;  }
    else if( ch == '*'  || ch == '/' ) {     return 2; }
    return 0;
}

string Stack::InfixToPostfix(string infix){
    int i = 0;
    string postfix = "";
    while( infix[i] != '\0'){
        if( !isOperator(infix[i]) && infix[i] != '(' && infix[i] != ')'){
            postfix += infix[i];
        }
        else if( infix[i] == '('){
            push(infix[i]);
        }
        else if( infix[i] == ')'){
            while( !isEmpty() && Top() == '('){
                postfix += pop();
            }
            pop();
        }
        else{
            if( !isEmpty() && precedence(infix[i]) <= precedence(Top())){
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

string reverseString(string infix){
    int n = infix.size();
    char temp;
    for( int i = 0; i < (n/2); i++ ){
        temp = infix[i];
        infix[i] = infix[n-i-1];
        infix[n-i-1] = temp;
    }
    return infix;
}

string Stack::InfixToPrefix(string infix){
    string Infix = reverseString(infix);
    string prefix = "";
    int i = 0;
    while( infix[i] != '\0'){
        if( !isOperator(infix[i]) && Infix[i] != ')' && Infix[i] != '('){
            prefix += Infix[i];
        }
        else if(Infix[i] == ')'){
            push(Infix[i]);
        }
        else if(Infix[i] == '('){
            if( !isEmpty() && Top() == ')'){
                prefix += pop();
            }
            pop();
        }
        else{
            if( !isEmpty() && precedence(Infix[i]) < precedence(Top())){
                prefix += pop();
            }
            push(Infix[i]);
        }
        i++;
    }
    if( !isEmpty()){
        prefix += pop();
    }
    return reverseString(prefix);
}

int operation(int v1,int v2,char ch){
    switch(ch){
        case '+':
            return v1 + v2;
            break;

        case '-':
            return v1 - v2;
            break;

        case '/':
            if( v2 == 0){
                cout<<"\nv2 == 0 we can not divide :- ";
                return 0;
            }
            return v1 / v2;
            break;

        case '*':
            return v1 * v2;
            break;

        default:
            cout<<"\nyou entered wrong choice :- ";
    }
}

int Stack::postfixEvaluation(string infix){
    int i = 0;
    while( infix[i] != '\0'){
        if(!isOperator(infix[i])){
            push(infix[i]-'0');
        }
        else{
            int v1 = pop();
            int v2 = pop();
            int res = operation(v2,v1,infix[i]);
            push(res);
        }
        i++;
    }
    if( top == -1){
        return 0;
    }
    else{
        return arr[top];
    }
}

int Stack::prefixEvaluation(string m){
    for( int i = m.size()-1; i>=0 ;i-- ){
        if( !isOperator(m[i])){
            push(m[i] - '0');
        }
        else{
            int v1 = pop();
            int v2 = pop();
            int res = operation(v1,v2,m[i]);
            push(res);
        }
    }
    if( top == -1){
        return -1;
    }
    else{
        return arr[top];
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
                Postfix = s.InfixToPostfix(exp);
                cout<<"\ninfix to postfix :- "<<Postfix;
                break;
            }

            case 2:{
                Prefix = s.InfixToPrefix(exp);
                cout<<"\ninfix to prefix :- "<<Prefix;
                break;
            }

            case 3:{
                int r1 = s.postfixEvaluation(Postfix);
                cout<<"\npostfix evaluation :- "<<r1;
                break;
            }

            case 4:{
                int r2 = s.prefixEvaluation(Prefix);
                cout<<"\nprefix evaluation :- "<<r2;
                break;
            }

            default:
                cout<<"\nyou entered wrong choice :- ";
        }
    }while(ch != 4);
    return 0;
}
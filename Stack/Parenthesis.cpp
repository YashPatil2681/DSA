#include<iostream>
#define size 5
using namespace std;

class Stack{
    char arr[size];
    int top;
public:
    Stack();
    void Push(char);
    char Pop();
    void Print();
    char Peek();
    bool isValidParenthesis(string);
    bool isFull();
    bool isEmpty();
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

void Stack::Push(char ch){
    if(isFull()){
        cout<<"\nstack is OVER_FLOW ";
    }
    else{
        top++;
        arr[top] = ch;
    }
}

char Stack::Peek(){
    if( top >= 0 ){
        return arr[top];
    }
    return '\0';
}

bool Stack::isValidParenthesis(string exp){
    for(int i=0 ; exp[i] != '\0' ; i++){
        char Ch = exp[i];
        if( Ch == '(' || Ch == '[' || Ch == '{'){
            Push(Ch);
        }
        else{
            if(!isEmpty()){
                char top = Peek();
                if( ((Ch == ')') && ( top == '(' )) || ((Ch == '}') && (top == '{')
                || (Ch == ']') && (top == '['))){
                    Pop();
                }
                else{
                    return false;
                }
            }
        }
    }
    if(isEmpty()){
        return true;
    }
    else{
        return false;
    }
}

void Stack::Print(){
    cout<<endl;
    if(isFull()){
        cout<<"\nstack is OVER-FLOW ";
    }
    else{
        for( int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

char Stack::Pop(){
    char CH;
    if(isEmpty()){
        cout<<"\nstack is UNDER-FLOW ";
        return '\0';
    }
    else{
        CH = arr[top];
        top --;
        return CH;
    }
}

int main(){
    Stack s;
    string exp = "[()]";
    if(s.isValidParenthesis(exp)){
        cout<<"\nbalanced ";
    }
    else{
        cout<<"\nnot balanced ";
    }
    s.Print();
    return 0;
}
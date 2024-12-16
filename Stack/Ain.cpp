#include<iostream>
#define size 100
using namespace std;

class Stack{
    int top ;
    string description[size];
    long amount[size];
    public:
    Stack();
    bool isEmpty();
    bool isFull();
    void push(string,long);
    void View();
    long TotalExpense();
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

void Stack::push(string Str,long lng){
    if( isFull()){
        cout<<"\nstack is OVER-FLOW :- ";
    }
    else{
        top++;
        description[top] = Str;
        amount[top] = lng;
    }
}    

void Stack::View(){
    if( isEmpty() ){
        cout<<"\nstack is UNDER-FLOW :- ";
    }
    else{
        for( int i=top;i>=0;i--){
            cout<<"[ "<<description[i]<<" "<<amount[i]<<" ]";
        }
        cout<<endl;
    }
}

long Stack::TotalExpense(){
    long Expenses = 0;
    for( int i=0;i<=top;i++){
        Expenses += amount[i];
    }
    return Expenses;
}

int main(){
    Stack s;
    int ch;
    
    return 0;
}
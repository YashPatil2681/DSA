#include<iostream>
#include<climits>
#define size 7
using namespace std;

class stack{
    int arr[size];
    int top;
    public:
    stack();
    void push(int);
    int  pop();
    int Top();
    void Print();
    bool isEmpty();
    bool isFull();
    void AddATbottom(int);
    void ReverseStack();
};

stack::stack(){
    top = -1;
}

bool stack::isEmpty(){
    return top == -1;
}

bool stack::isFull(){
    return top == size-1;
}

void stack::push(int st){
    if( isFull() ){
        cout<<"\nstack is OVER-FLOW ";
    }
    else{
        arr[++top] = st;
    }
}

int stack::Top(){
    return arr[top];
}

void stack::AddATbottom(int x){
    if( isEmpty()){
        push(x);
        return ;
    }
    int i = pop();
    AddATbottom(x);
    push(i);
}

void stack::ReverseStack(){
    if(isEmpty()){
        return ;
    }
    int top = pop();
    ReverseStack();
    AddATbottom(top);
}

int stack::pop(){
    int st;
    if ( isEmpty() ){
        cout<<"\nstack is UNDER-FLOW ";
    }
    else{
        st = arr[top];
        top --;
        return st;
    }
}

void stack::Print(){
    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.Print();
   
   s.ReverseStack();
   s.Print();
    return 0;
}
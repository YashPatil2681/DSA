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
    void Print();
    bool isEmpty();
    bool isFull();
    void AddATbottom(int);
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

void stack::AddATbottom(int x){
    if ( isEmpty()){
        push(x);
        return ;
    }
    int i = pop();
    AddATbottom(x);
    push(i);
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
    s.push(0);
    s.push(-1);
    s.push(-3);
    s.push(3);
    s.Print();
   
   s.AddATbottom(11);
   s.Print();
    return 0;
}
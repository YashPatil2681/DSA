#include<iostream>
using namespace std;
#define size 10

class stack{
    int arr[size];
    int top;
public:
    stack();
    void push(int);
    int pop();
    bool is_Empty();
    bool is_Full();
    void print();
};

stack::stack(){
    top = -1;
}

bool stack::is_Empty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool stack::is_Full(){
    if(top == size - 1){
        return true;
    }
    else{
        return false;
    }
}

void stack::push(int val){
    if(is_Full()){
        cout<<"\nSTACK is overflow :-- ";
    }
    else{
        top++;
        arr[top] = val;
    }
}

int stack::pop(){
    int t;
    if(is_Empty()){
        cout<<"\nSTACK is underflow :- ";
    }
    else{
        t = arr[top];
        top--;
    }
    return t;
}

void stack::print(){
    if(is_Full()){
        cout<<"\nSTACK is overflow :- ";
    }
    else{
        cout<<endl;
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    stack s;
    s.pop();
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.print();

    cout <<"\nPopped element: " << s.pop() << endl;
    s.print();
    cout <<"\nPopped element: " << s.pop() << endl;

    s.print();

    return 0;
}
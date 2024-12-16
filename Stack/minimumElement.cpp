#include<iostream>
#include<climits>
#define size 5
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
    void Min();
    void Max();
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

void stack::Min(){
    int min = INT_MAX;
    if ( isEmpty() ){
        cout<<"\nstack is UNDER-FLOW ";
    } 
    for (int i=0; i<= top ; i++){
        if ( arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"\nmin is :- "<<min;  
}

void stack::Max(){
    int max = INT_MIN;
    if ( isEmpty() ){
        cout<<"\nstack is UNDER-FLOW ";
    } 
    for(int i=0;i<=top;i++){
        if ( arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"\nmax is :- "<<max;

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
    s.Min();
    s.Max();
    return 0;
}
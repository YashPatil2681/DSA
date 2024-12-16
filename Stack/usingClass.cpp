#include<iostream>
using namespace std;
#define size 10

class Node{
    int data;
public:
    Node* next;
    Node(int);
    int getData();
};

Node::Node(int n){
    data = n;
    next = NULL;
}

int Node::getData(){
    return data;
}

class stack{
    Node* top;
    public:
    stack();
    void push(int);
    int pop();
    bool is_Empty();
    bool is_Full();
    void Print();
};

stack::stack(){
    top  = nullptr;
}

bool stack::is_Empty(){
    return top == NULL;
}

bool stack::is_Full(){
    return false;
}

void stack::push(int val){
    //create a new node
    Node* newNode = new Node(val);
    if(!newNode){
        cout<<"\nstack is OVERFLOW ";
        return ;
    }
    newNode->next = top;
    top = newNode;
}

int stack::pop(){
    if(is_Empty()){
        cout<<"\nstack is UNDERFLOW ";
        return -1;
    }
    else{
        Node* temp = top;
        top = top->next;
        int popEle = temp->getData();
        delete temp;
        return popEle;
    }
}

void stack::Print(){
    if(is_Full()){
        cout<<"\nstack is OVERFLOW ";
    }
    else{
        Node* temp = top;
        while(temp != NULL){
            cout<<temp->getData()<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.Print();
    s.pop();
    s.pop();
    s.Print();
    return 0;
}
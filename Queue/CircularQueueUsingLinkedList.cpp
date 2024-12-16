#include<iostream>
#define size 10
using namespace std;
class Node{
    int data;
    public:
    Node* next_add;
    Node(int);
    void Print();
};

Node::Node(int d){
    data = d;
    next_add = NULL;
}

void Node::Print(){
    cout<<data<<" ";
}

class CircularQueue{
    Node* head;
    Node* tail;
    public:
    CircularQueue();
    void enqueue(int);
    void dequeue();
    void Print();
};

CircularQueue::CircularQueue(){
    head = nullptr;
    tail = nullptr;
}

void CircularQueue::enqueue(int val){
    Node* newNode = new Node(val);
    if( head == nullptr ){
        head = tail = newNode;
    }
    else{
        Node* temp = head;
        while( temp->next_add != NULL ){
            temp = temp->next_add;
        }
        temp->next_add = newNode;
        temp = newNode;
    }
}

void CircularQueue::Print(){
    if( head == NULL ){
        cout<<"\nlinked list is empty :- ";
        return ;
    }
    else{
        Node* temp = head;
        while( temp != nullptr ){
            temp->Print();
            temp = temp->next_add;
        }
    }
}

int main(){
    CircularQueue C;
    C.enqueue(3);
    C.enqueue(2);
    C.enqueue(1);
    C.Print();
}
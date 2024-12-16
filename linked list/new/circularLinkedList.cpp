#include<iostream>
using namespace std;

class Node{
    int data;
    public:
    Node* next_add;
    Node();
    void read();
    void show();
};

Node::Node(){
    next_add = NULL;
}

void Node::read(){
    cout<<"Enter data :- ";
    cin>>data;
}

void Node::show(){
    cout<<data<<" ";
}

class LinkedList{
    Node* head;
    public:
    LinkedList();
    void insertNode();
    void display();
    bool IsLoopDetected();
};

LinkedList::LinkedList(){
    head = NULL;
}

void LinkedList::insertNode(){
    Node* newNode = new Node;
    newNode->read();
    if ( head == NULL ){
        head = newNode;
        newNode->next_add = head;
    }
    else{
        Node* temp = head;
        while ( temp->next_add != head ){
            temp = temp->next_add;
        }
        temp->next_add = newNode;
        newNode->next_add = head;
    }
}

bool LinkedList::IsLoopDetected(){
    if ( head == NULL ){
        cout<<"\nliked list is Empty :- ";
    }
    Node* slow = head;
    Node* fast = head;
    while ( fast != NULL && fast->next_add != NULL ){
        slow = slow->next_add;
        fast = fast->next_add->next_add;

        if ( slow == fast ){
            return true;
        }      
    }
    return false;
}

void LinkedList::display(){
    Node* temp = head;
    do{
        temp->show();
        temp = temp->next_add;
    }while( temp != head );
}

int main(){
    LinkedList L;
    L.insertNode();
    L.insertNode();
    L.insertNode();
    L.display();

    L.insertNode();
    L.display();
    

    if ( L.IsLoopDetected()){
        cout<<"\nloop is detected in above in liked list :- ";
    }
    else{
        cout<<"\nloop is not detected in above linked list :- ";
    }
    return 0;
}
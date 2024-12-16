#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* address;
    Node(int);
};

Node::Node(int n){
    data = n;
    address = NULL;
}

void InsertAtHead(Node* &Head,int n){
    //create a new linked list
    Node* temp = new Node(n);
    temp->address = Head;
    Head = temp;
}

void InsertAtTail(Node* &Tail,int n){
    //create a new linked list 
    Node* temp = new Node(n);
    Tail->address = temp;
    Tail = temp;
}

void MiddleLinkedList(Node* &head){
    Node* slow = head;
    Node* fast = head;
    while ( (fast!= NULL) && (fast->address != NULL ) ){
        slow = slow->address;
        fast = fast->address->address;
    }
    cout<<"\nmiddle element of linked list :- "<<slow->data;
}

int  FindLength(Node* &Head){
    Node* temp = Head;
    int i = 0;

    while ( temp != NULL ){
        i++;
        temp = temp->address;
    }
    return i;
}

int FindMiddle( Node* head ,int size,int i = 0){
    Node* temp = head;
    while ( i < (size/2) && temp != NULL ){
        i++;
        temp = temp->address;
    }
    return temp->data;
}

void Print(Node* Head){
    //Here we create only point likedlist with other linked list
    Node* temp = Head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->address;
    }
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(3);
    Node* Head  = Node1;
    Print(Head);
    InsertAtHead(Head,2);
    InsertAtHead(Head,1);
    cout<<"\nAfter Insert frome head :- ";
    cout<<endl;
    Print(Head);

    Node* Tail = Node1;
    InsertAtTail(Tail,4);
    InsertAtTail(Tail,5);
    cout<<"\nTotal linked list is :- "<<endl;
    Print(Head);
    
    /*int size = FindLength(Head);
    cout<<"\nsize of this array is :- "<<size;
    int val = FindMiddle(Head,size);
    cout<<"\nvalue is :- "<<val;
    */
    MiddleLinkedList(Head);
}
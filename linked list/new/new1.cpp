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

void append(Node* head,int n){
    Node* newNode = new Node(n);
    if ( head == NULL ){
        head  = newNode;
    }
    else{
        Node* temp = head;
        while ( temp->address != NULL ){
            temp = temp->address;
        }
        temp->address = newNode;
    }
}

Node* insertion( Node* head1,Node* head2){
    Node* h1 = head1;
    Node* h2 = head2;

    Node* h3;
    
    while ( h1!= NULL && h2 != NULL ){
        
    }
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
    Node* Node2 = new Node(4);
    Node* head1 = Node1;
    Node* tail1 = Node1;
    Node* head2 = Node2;
    Node* tail2 = Node2;
    cout<<"\nlinked list from node1 :- ";
    Print(head1);
    cout<<"\nlinked list from node2 :- ";
    Print(head2);

    InsertAtHead(head1,2);
    InsertAtHead(head1,1);
    cout<<"\nlinked list from node1 :- ";
    Print(head1);

    InsertAtTail(tail1,4);
    InsertAtTail(tail1,5);
    cout<<"\nlinked list from node1 :- ";
    Print(head1);

    InsertAtHead(head2,3);
    InsertAtHead(head2,2);
    InsertAtHead(head2,1);
    cout<<"\nlinked list from node2 :- ";
    Print(head2);

    cout<<"\nlinked list from node1 :- ";
    Print(head1);
    InsertAtTail(tail2,5);
    InsertAtTail(tail2,6);
    cout<<"\nlinked list from node2 :- ";
    Print(head2);
    return 0;
}
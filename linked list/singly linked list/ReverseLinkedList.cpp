#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next_add;
    Node(int);
};

Node::Node(int n){
    data = n;
    next_add = NULL;
}

void insertAtHead(Node* &Head,int n){
    //create a new node
    Node* temp = new Node(n);
    temp->next_add = Head;
    Head = temp;
}

void insertAtTail(Node* &Tail,int n){
    //create a new node
    Node* temp = new Node(n);
    Tail->next_add = temp;
    Tail = temp;
}

void Reverse(Node* &Head,Node* &Tail,int n,int i=0){
    Node* prev = NULL;
    Node* curr = Head;
    Node* temp;
    while(curr != NULL){
        temp = curr->next_add;
        curr->next_add = prev;
        prev = curr;
        curr = temp;
    }
    Head = prev;
}

void Print(Node* Head){
    //create a new node
    Node* temp = Head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next_add;
    }
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(3);
    Node* Head  = Node1;
    Node* Tail = Node1;
    Print(Head);

    insertAtHead(Head,2);
    insertAtHead(Head,1);
    Print(Head);
 
    insertAtTail(Tail,4);
    insertAtTail(Tail,5);
    Print(Head);
    
    Reverse(Head,Tail,4);
    Print(Head);
    return 0;
}
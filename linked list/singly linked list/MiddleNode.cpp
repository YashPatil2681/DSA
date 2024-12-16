#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next_add;
    Node(int );
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

int getSize(Node* &Head,int i=0){
    Node* temp = Head;

    while(temp->next_add != nullptr){
        i++;
        temp = temp->next_add;
    }
    return i;
}

int Middle(Node* &Head,int n,int i=0){
    int mid = getSize(Head)/2;
    Node* temp = Head;
    while(i < mid){
        i++;
        temp = temp->next_add;
    }
    return temp->data;
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
    Node* Tail  = Node1;
    Print(Head);

    insertAtHead(Head,2);
    insertAtHead(Head,1);
    Print(Head);
 
    insertAtTail(Tail,4);
    insertAtTail(Tail,5);
    Print(Head);

    cout<<"\nMiddle element is :- "<<Middle(Head,4);
    return 0;
}
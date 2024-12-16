#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev_add;
    Node* next_add;
    Node(int );
};

Node::Node(int n){
    data = n;
    prev_add = NULL;
    next_add = NULL;
}

void insertAtHead(Node* &Head,int n){
    //create a new node 
    Node* temp  = new Node(n);
    temp->next_add = Head;
    Head->prev_add = temp;
    Head = temp;
}

void insertAtTail(Node* &Tail,int n){
    //create a new node
    Node* temp = new Node(n);
    Tail->next_add = temp;
    temp->prev_add = Tail;
    Tail = temp;
}

void insertAtSpecific(Node* &Head,Node* &Tail,int n,int position,int i=0){
    
    if(position == 1){
        insertAtHead(Head,n);
        return;
    }
    Node* temp = Head;
    while(i < position-1){
        temp = temp->next_add;
        i++;
    }
    if(temp->next_add == NULL){
        insertAtTail(Tail,n);
        return ;
    }
    Node* insertNode = new Node(n);
    insertNode->next_add = temp->next_add;
    temp->next_add->prev_add = insertNode;
    temp->next_add = insertNode;
    insertNode->prev_add = temp;
}

void Print(Node* Head){
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
    Print(Head);
    insertAtHead(Head,2);
    insertAtHead(Head,1);
    Print(Head);

    Node* Tail = Node1;
    insertAtTail(Tail,5);
    insertAtTail(Tail,6);
    Print(Head);

    int position;
    cout<<"\nEnter position :- ";
    cin>>position;

    insertAtSpecific(Head,Tail,4,position);
    Print(Head);
    return 0;
}
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next_add;
    Node(int );
    ~Node(){}
};

Node::Node(int n){
    this->data = n;
    this->next_add = NULL;
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

void insertAtSpecific(Node* &Head,Node* &Tail,int n,int position){
    //node is insert at starting at start at Linked list
    Node* temp = Head;
    if(position == 1){
        insertAtHead(Head,n);
        return ;
    }
    int i = 0;
    while(i < position -1){
        temp = temp->next_add;
        i++;
    }
    if(temp->next_add == nullptr){
        insertAtTail(Tail,n);
        return;
    }
    Node* insertNode = new Node(n);
    insertNode->next_add = temp->next_add;
    temp->next_add = insertNode;
}

void DeleteNode(Node* &Head,Node* &Tail,int n,int position){
    //delete node
    if(position == 1){
        Node* temp = Head;
        Head = Head->next_add ;
        temp->next_add = NULL;
        delete temp;
    }
    else{
        int i = 0;
        Node* curr = Head;
        Node* prev = NULL;
        while(i < position-1 ){
            prev = curr;
            curr = curr->next_add;
            i++;    
        }
        prev->next_add = curr->next_add;
        curr->next_add = NULL;
        delete curr;
    }
}

void Print(Node* Head){
    //
    Node* temp = Head;
    while( temp != NULL ){
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
    insertAtTail(Tail,4);
    insertAtTail(Tail,5);
    Print(Head);

    int position ;
    cout<<"\nEnter position where you insert element :- ";
    cin>>position;

    insertAtSpecific(Head,Tail,0,position);
    Print(Head);

    int pos;
    cout<<"\nEnter pos where you insert element :- ";
    cin>>pos;

    DeleteNode(Head,Tail,3,pos);
    Print(Head);
    return 0;
}
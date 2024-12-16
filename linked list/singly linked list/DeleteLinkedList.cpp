#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* address;
    Node(int n){
        this->data = n;
        this->address = NULL;
    }
    ~Node(){}
};

void insertAtHead(Node* &Head,int n){
    //create a new node
    Node* temp = new Node(n);
    temp->address = Head;
    Head = temp;
}

void insertAtTail(Node* &Tail,int n){
    //create a new node 
    Node* temp = new Node(n);
    Tail->address = temp;
    Tail = temp;
}

void insertAtSpecific(Node* &Tail,Node* &Head,int pos,int n,int i=0){
    
    // if node position is equal to 1
    if(pos == 1){
        insertAtHead(Head,n);
        return ;
    }

    //create a new node to store Head 
    Node* temp = Head;
    while(i < pos -1){
        temp = temp->address;
        i++;
    }

    if(temp->address == NULL){
        insertAtTail(Tail,n);
        return ;
    }
    //creating node which is insert at specific position
    Node* insertElement = new Node(n);
    insertElement->address = temp->address;
    temp->address = insertElement;
}

void deleteNode(Node* &Head,Node* &Tail,int n,int position,int i=0){
    //delte node at starting at atart and Head
    if(position == 1){
        Node* temp = Head;
        Head = Head->address;
        temp->address = NULL;
        delete temp;
    }
    //delete node present at middle or at end 
    else{
        Node* current = Head;
        Node* previous = NULL;
        while(i < position-1){
            previous = current;
            current = current->address;
            i++;
        }
        previous->address = current->address;
        current->address  = NULL;
        delete current;
    }
}

void Print(Node* Head){
    //
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
    //insert element from head
    insertAtHead(Head,2);
    insertAtHead(Head,1);
    Print(Head);
    Node* Tail  = Node1;
    //insert element frome tail
    insertAtTail(Tail,5);
    insertAtTail(Tail,6);
    Print(Head);

    int pos;
    cout<<"Enter pos :- ";
    cin>>pos;

    insertAtSpecific(Tail,Head,pos,4);   
    Print(Head);

    int position;
    cout<<"Enter position at which you delete node :- ";
    cin>>position;
    deleteNode(Head,Tail,3,position);
    Print(Head);

    return 0;
}
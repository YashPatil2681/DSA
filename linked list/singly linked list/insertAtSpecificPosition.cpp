#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* address;
    Node(int n){
        data = n;
        address = NULL;
    }
};

void insertAtHead(Node* &Head,int n){
    //create a new node 
    Node *temp = new Node(n);
    temp->address = Head;
    Head = temp;
}

void insertAtTail(Node* &Tail,int n){
    //create a new node
    Node* temp = new Node(n);
    Tail->address = temp;
    Tail = temp;
}

void insertAtSpecific(Node* &Head,Node* Tail,int n,int pos,int i=0){
    //
    Node* temp = Head;
    if(pos == 1){
        insertAtHead(Head,0);
        return;
    }
    while(i < pos-1){
        temp = temp->address;
        i++;
    }

    if(temp->address == NULL){
        insertAtTail(Tail,8);
        return;
    }

    //create a new node
    Node* insertElement = new Node(n);
    insertElement->address = temp->address;
    temp->address = insertElement;
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
    Node* Node1 = new Node(4);
    Node* Head  = Node1;
    insertAtHead(Head,3);
    insertAtHead(Head,2);
    insertAtHead(Head,1);
    Print(Head);

    Node* Tail = Node1;
    insertAtTail(Tail,5);
    insertAtTail(Tail,6);
    insertAtTail(Tail,7);
    Print(Head);

    int pos;
    cout<<"\nEnter pos :- ";
    cin>>pos;

    insertAtSpecific(Head,Tail,3,pos);
    Print(Head);
    return 0;    
}                                            
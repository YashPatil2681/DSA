#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* previous_add;
    Node* next_add;
    Node(int );   /// parametrised constructor is called 
    ~Node();      /// destructor is called 
};

Node::Node(int n){
    data = n;
    previous_add = NULL;
    next_add = NULL;
}

Node::~Node(){
    cout<<"de - allocate the memory "<<endl;
}

void insertAtHead(Node* &Head,int n){
    //create a new node  
    Node* temp = new Node(n);
    temp ->next_add = Head;
    Head->previous_add = temp;
    Head = temp;
}

void insertAtTail(Node* &Tail,int n){
    //create a new node 
    Node* temp = new Node(n);
    Tail->next_add = temp;
    temp->previous_add = Tail;
    Tail = temp;
}

void insertAtSpceifc(Node* &Head,Node* &Tail,int n,int position,int i=0){
    //create 
    if(position == 1){
        insertAtHead(Head,n);
        return ;
    }
    Node* temp = Head;
    while(i < position-1){
        temp = temp->next_add;
        i++;
    }
    if(temp->next_add == NULL){
        insertAtTail(Tail,n);
    }
    
    Node* insertNode = new Node(n);
    insertNode->next_add = temp->next_add;
    temp->next_add->previous_add = insertNode;
    temp->next_add = insertNode;
    insertNode->previous_add = temp;
}

void DeleteNode(Node* &Head,Node* &Tail,int n,int position,int i=0){
    //
    if(position == 1){
        Node* temp = Head;
        Head = temp->next_add;
        temp->next_add = NULL;
        delete temp;
    }
    else{
        Node* current = Head;
        Node* previous = NULL;
        while(i < position-1){
            previous = current;
            current  = current->next_add;
            i++;
        }
        previous->previous_add = NULL;
        previous->next_add = current->next_add;
        current->next_add = NULL;
        delete current; 
    }
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

    insertAtSpceifc(Head,Tail,4,position);
    Print(Head);

    int pos;
    cout<<"\nEnter pos :- ";
    cin>>pos;

    DeleteNode(Head,Tail,4,pos);
    Print(Head);
    
    return 0;
}
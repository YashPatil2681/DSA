#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int);
};

Node::Node(int n){
    data = n;
    next = NULL;
}

void InsertAtHead(Node* &Head,int n){
    //create a new node
    Node *temp = new Node(n);
    temp->next = Head;
    Head = temp;
}

void InsertAtTail(Node* &Tail,int n){
    //create a new node
    Node* temp = new Node(n);
    Tail->next = temp;
    Tail = temp;
}

void InsertAtSpecific(Node* &Tail,Node* &Head,int n,int pos,int i=0){
    //
    if(pos==1){
        InsertAtHead(Head,n);
        return ;
    }
    Node* temp = Head;
    while(i < pos-1){
        temp = temp->next; 
        i++;      
    }
    if(temp->next == NULL){
        InsertAtTail(Tail,7);
        return;
    }
    Node* InsertNode = new Node(4);
    InsertNode->next = temp->next;
    temp->next = InsertNode;
}

Node* RemoveLinkedList(Node* head){
    Node* curr = head;
    while ( curr != NULL ){
        if ( (curr->next != NULL) && (curr->data == curr->next->data)){
            Node* next_next = curr->next->next;
            Node* nodeTodelete = curr->next;
            delete(nodeTodelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}

void Print(Node* Head){
    //create 
    Node* temp = Head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(2);
    Node* Head  = Node1;
    Node* tail  = Node1; 
    InsertAtHead(Head,2);
    InsertAtHead(Head,1);
    Print(Head);

    InsertAtTail(tail,2);
    InsertAtTail(tail,6);
    Print(Head);
    
    Print(Head);

    Head = RemoveLinkedList(Head);
    Print(Head);
    return 0;
}
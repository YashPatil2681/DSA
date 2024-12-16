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

int LoopDetect(Node* head){
    Node* slow = head;
    Node* fast = head;
    int i = 0;
    
    while ( fast != NULL && fast->next != NULL ){
        slow = slow->next;
        fast = fast->next->next;
        i++;

        if ( fast == slow ) {
            return i;
        }
    }
    return 0;
}

void Print(Node* head){
    if ( head == NULL ){
        return ;
    }
    Node* temp = head;
    cout<<temp->data<<" ";
    Print(temp->next);
}

int main(){
    Node* Node1 = new Node(1);
    Node* Head  = Node1;
     
    InsertAtHead(Head,2);
    InsertAtHead(Head,1);
    Print(Head);
    cout<<endl;
    InsertAtHead(Head,2);
    InsertAtHead(Head,1);    
    Print(Head);

    Head->next->next->next->next = Head;
    
    int res = LoopDetect(Head);
    if ( res == 0 ){
        cout <<"\nloop is not detected :- ";
    }
    else{
        cout<<"\nloop is detected :- "<<" and count is "<<res;
    }
    return 0;
}
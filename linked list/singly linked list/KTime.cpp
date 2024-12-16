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

void insertNode(Node* &Head,int n){
    Node* temp = new Node(n);
    temp->next_add= Head;
    Head = temp;
}

Node* ReverseKTimes(Node* Head,int n,int i=0){
    Node* next = NULL;
    Node* prev = NULL;
    Node* curr = Head;

    while( curr != NULL && i < n ){
        next = curr->next_add;
        curr->next_add = prev;
        prev = curr;
        curr = next;
        i++;
    }

    if(next != NULL){
        Head->next_add = ReverseKTimes(next,n);
    }

    return prev;
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
    Node* Node1 = new Node(5);
    Node* Head = Node1;

    Print(Head);
    insertNode(Head,4);
    insertNode(Head,3);
    insertNode(Head,2);
    insertNode(Head,1);
    
    Print(Head);

    int n;
    cout<<"Enter n :- ";
    cin>>n;

    Head = ReverseKTimes(Head,n);
    Print(Head);
    return 0;
}
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next_add;
    Node(int n ){
        data = n;
        next_add = NULL;
    }
};


void insertAtHead(Node* &Head,int n){
    Node* temp = new Node(n);
    temp->next_add = Head;
    Head = temp;
}

Node* Reverse(Node* Head,int n,int i=0){
    Node* temp = NULL;
    Node* prev = NULL;
    Node* curr = Head;

    while(curr != NULL && i < n){
        temp = curr->next_add;
        curr->next_add = prev;
        prev = curr;
        curr = temp;
        i++;
    }
    if(temp != NULL){
        Head ->next_add = Reverse(temp,n);
    }
    return prev;
}

void Print(Node* Head){
    Node* temp = Head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp ->next_add;
    }
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(5);
    Node* Head  = Node1;

    Print(Head);
    insertAtHead(Head,4);
    insertAtHead(Head,3);
    insertAtHead(Head,2);
    insertAtHead(Head,1);
    insertAtHead(Head,4);
    insertAtHead(Head,3);
    insertAtHead(Head,2);
    insertAtHead(Head,1);
    Print(Head);

    int n;
    cout<<"\nenter n :- ";
    cin>>n;

    Head = Reverse(Head,n);
    Print(Head);
    return 0;
}
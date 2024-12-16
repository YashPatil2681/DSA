#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next_add;
    Node(int n){
        data = n;
        next_add = NULL;
    }
};

void insertAtHead(Node* &Head,int n){
    Node* temp = new Node(n);
    temp->next_add = Head;
    Head = temp;
}

void Reverse(Node* &Head){
    Node* prev = NULL;
    Node* curr = Head;
    while(curr != NULL){
        Node* temp = curr->next_add;
        curr->next_add = prev;
        prev = curr;
        curr = temp;
    }
    Head = prev;
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
    Node* Node1 = new Node(3);
    Node* Head  = Node1;

    Print(Head);
    insertAtHead(Head,2);
    insertAtHead(Head,1);
    Print(Head);

    cout<<"\nreversed linked list is :- "<<endl;

    Reverse(Head);
    Print(Head);
    return 0;
}
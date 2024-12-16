#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int n){
        data = n;
        next = NULL;
    }
};

void Insertnode(Node* &Head,int n){
    // create a new node 
    Node* temp = new Node(n);
    temp->next = Head;
    Head = temp;
}

void Print(Node* &Head){
    //Print a new node 
    Node* temp = Head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(3);

    Node* Head  = Node1;

    Print(Head);

    Insertnode(Head,9);
    Insertnode(Head,9);

    Print(Head);
}
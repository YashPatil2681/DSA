/*  
     prev-add|data|next-add
*/

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev_add;
    Node* next_add;
    //paremetrised constructor
    Node(int n){
        data = n;
        prev_add = NULL;
        next_add = NULL;
    }
};

void insertAtHead(Node* &Head,int n,int i=0){
    //
    Node* temp = new Node(n);
    
    temp->next_add = Head;
    Head->prev_add = temp;
    Head = temp;
    
}

void Print(Node* Head){
    //crate one temporary variable
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
    return 0;
}
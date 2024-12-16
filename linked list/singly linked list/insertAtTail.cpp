/*
Insert at tail :- is add new node at ending 

Tail :-  is a pointer of node 
         is a showing last node
        tail    temp
        [12| ]  [13| ]
*/

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int n){
        data = n;
        next = NULL;
    }
};

void insertAtTail(Node* &Tail,int n){
    Node* temp = new Node(n);
    Tail->next = temp;
    Tail = temp;
}


void Print(Node* &Tail){
    Node* temp = Tail;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(3);
    Node* Tail  = Node1;
    Print(Tail);
    insertAtTail(Tail,12);
    insertAtTail(Tail,9);
    cout<<"Now we insert at tail :- "<<endl;
    Print(Tail);
    return 0;
}
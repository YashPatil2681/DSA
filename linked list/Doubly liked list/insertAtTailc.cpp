#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next_add;
    Node* prev_add;
    Node(int n){
        data = n;
        prev_add = NULL;
        next_add = NULL;
    }
};

void insertAtTail(Node* &Tail,int n){
    Node* temp = new Node(n);
    Tail->next_add = temp;
    temp->prev_add = Tail;
    Tail = temp;
}

void Print(Node* Tail){
    Node* temp = Tail;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next_add;
    }
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(3);
    Node* Tail = Node1; 
    Node* Head = Node1;
    Print(Head);

    insertAtTail(Tail,4); 
    insertAtTail(Tail,5);
    Print(Head);
    return 0;
}
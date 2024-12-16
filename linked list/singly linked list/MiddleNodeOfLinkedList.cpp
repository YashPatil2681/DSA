#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int n ){
        data = n;
        next = NULL;
    }
};

void insertNode(Node* &Head,int n){
    Node* temp = new Node(n);
    temp->next = Head;
    Head = temp;
    
}

int getSize(Node* &Head){
    Node* temp = Head;
    int i = 0;
    while(temp != NULL){
        i++;
        temp = temp->next;
    }
    return i;
}

int MiddleNode(Node* &Head,int n){
    int size = getSize(Head);
    int mid  = size/2;
    int i = 0;
    Node* temp = Head;
    while(i < mid ){
        temp = temp->next;
        i++;
    }
    return temp->data;
}

void Print(Node* Head){
    Node* temp = Head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(3);
    Node* Head  = Node1;

    insertNode(Head,2);
    insertNode(Head,1);
    insertNode(Head,0);
    // insertNode(Head,-1);
    Print(Head);

    cout<<"\nMiddle NOde of linked list is :- "<<MiddleNode(Head,3);

    return 0;
}
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

int Sum(Node* &Head,int i = 0){
    int sum = 0;
    Node* temp = Head;
    while(temp != NULL){
        sum += temp->data;
        temp = temp->next_add;
    }
    return sum;
}

void insertNode(Node* &Head,int n){
    Node* temp = new Node(n);
    temp->next_add= Head;
    Head = temp;
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
    Node* Head  = Node1;
    Print(Head);
    insertNode(Head,4);
    insertNode(Head,3);
    insertNode(Head,2);
    insertNode(Head,1);
    Print(Head);

    int res1 = Sum(Head);
    cout<<"\nsum is :- "<<res1;

    return 0;
}
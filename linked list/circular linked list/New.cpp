#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next_add;
    Node(int);
};

Node::Node(int n){
    this->data = n;
    this->next_add = NULL;
}

void insertNode(Node* &Tail,int n,int element){
    if(Tail == NULL){
        Node* newNode = new Node(n);
        Tail = newNode;
        Tail = Tail->next_add;
    }
    else{
        Node* current = Tail;
        Node* temp = new Node(n);
        while(current->data != element){
            current = current->next_add;
        }
        //assume that all element are present 
        temp->next_add = current->next_add ;
        current->next_add = temp;
    }
}

void Print(Node* Tail){
    //
    do{
        cout<<Tail->data<<" ";
        Tail = Tail->next_add;
    }
    while(Tail != NULL);
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(3);
    Node* Tail = Node1;

    Print(Tail);
    insertNode(Tail,4,3);
    Print(Tail);
    return 0;
}
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

void insertNode(Node* Tail,int n,int element){
    //if node is empty 
    if(Tail == NULL){
        //create a new node
        Node* newNode = new Node(n);
        //tail is assign value to the newNode because there is only one node
        newNode = Tail;
        newNode->next_add = newNode;
    }
    else{
        //create a new node
        Node* temp = new Node(n);
        Node* current = Tail;
        while(current->data != element ){
            current = current->next_add;
        }
        //element is found in this linked list 
        temp->next_add = current->next_add;
        current->next_add = temp;
    }
}

void Print(Node* Tail){
    //
    Node* temp = Tail;
    do{
        cout<<Tail->data<<" ";
        Tail = Tail->next_add;
    }
    while(Tail != NULL);
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(2);
    Node* Tail  = Node1;
    Print(Tail);
    insertNode(Tail,3,2);
    Print(Tail);
    return 0;
}
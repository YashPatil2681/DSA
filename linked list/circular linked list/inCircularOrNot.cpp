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

void insertNode(Node* &Tail,int val,int n){
    //create a new node 
    if(Tail == NULL){
        Node* newNode = new Node(n);
        newNode = Tail;
        newNode->next_add = newNode;
    }
    else{
        Node* newNode = new Node(n);
        Node* curr = Tail;
        while(curr->data != val){
            curr = curr->next_add;
        }
        newNode->next_add = curr->next_add;
        curr->next_add = newNode;
    }
}

bool isCircularOrNot(Node* Head){
    if(Head == NULL){
        return true;
    }
    Node* temp = Head->next_add;
    while(temp != NULL && temp != Head){
        temp = temp->next_add;
    }
    if(temp == Head){
        return true;
    }
    
    return false;
    
}

void Print(Node* Tail){
    Node* temp = Tail;
    do{
        cout<<temp->data<<" ";
        temp = temp->next_add;
    }while(temp != NULL);
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(7);
    Node* Tail  = Node1;
    Tail->next_add = Tail;

    Print(Tail);

    insertNode(Tail,7,6);
    insertNode(Tail,6,5);
    insertNode(Tail,5,4);
    insertNode(Tail,4,3);
    Print(Tail);

    if(isCircularOrNot(Tail)){
        cout<<"\nit is a circular linked list :- ";
    }
    else{
        cout<<"\nit is not circular linked list :-  ";
    }
    return 0;
}
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

void insertNode(Node* &Tail,int n,int val){
    if(Tail == NULL){   // linked list is empty
        Node* newNode = new Node(n);
        Tail = newNode;
        newNode ->next_add = Tail;
    }
    else{        //linked list is non empty
        Node* insertNode = new Node(n);
        Node* temp = Tail;
        while(temp->data != val){
            temp = temp->next_add;
        }
        insertNode->next_add = temp->next_add;
        temp->next_add = insertNode;
    }
}

void deleteNode(Node* &Tail,int n,int val){
    if(Tail == NULL){     /// tail is null because liked list is empty
        cout<<"\nlinked list is empty :- ";
    }
    else{    ///linked list is not empty
        Node* prev = Tail;
        Node* curr = prev->next_add;
        while(curr->data != val && prev != curr){
            prev = curr;
            curr = curr->next_add;
        }
        if(prev == curr){
            Tail = NULL;
        }
        else if(Tail == curr){
            Tail = prev;
        }
        prev->next_add = curr->next_add;
        curr->next_add = NULL;
        delete curr;
    }
}

void Print(Node* Tail){
    Node* temp = Tail;
    do{
        cout<<temp->data<<" ";
        temp  = temp->next_add;
    }
    while(temp != NULL);
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(1);
    Node* Tail  = Node1;
    Print(Tail);

    insertNode(Tail,4,1);
    insertNode(Tail,2,1);
    Print(Tail);

    deleteNode(Tail,3,4);
    Print(Tail);
    deleteNode(Tail,3,2);
    Print(Tail);
    deleteNode(Tail,3,1);
    Print(Tail);
    deleteNode(Tail,3,1);
    Print(Tail);
    return 0;
}
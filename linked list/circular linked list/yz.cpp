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
    ~Node(){}
};

void insertNode(Node* &Tail,int n,int val){
    if(Tail == NULL){   //node is not present in this linked list
        Node* newNode = Tail;
        newNode = Tail;
        newNode->next_add = newNode;
    }
    else{
        //linked list is not empty
        Node* insert = new Node(n);
        Node* temp   = Tail;
        while(temp->data != val){
            temp = temp->next_add;
        }
        //node is present in linked list
        insert->next_add = temp->next_add;
        temp->next_add = insert; 
    }
}

void deleteNode(Node* &Tail,int n,int val){
    if(Tail == NULL){   // linked list empty
        cout<<"\nLinked list is non - empty ";
    }
    else{
        Node* prev = Tail;
        Node* curr = prev->next_add;

        while(prev->data != val){
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

    deleteNode(Tail,3,2);
    Print(Tail);
    return 0;
}
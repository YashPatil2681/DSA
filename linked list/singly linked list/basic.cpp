#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(); //Default constructor
    Node(int);//parametrised constructor 
};
//Default constructor 
Node::Node(){
    data = 10;
    next = NULL;
}

//parametrised constructor 
Node::Node(int n){
    data = n;
    next = NULL;
}

int main(){
    Node* Node1 = new Node();
    cout<<"\ndata of default constructor  :- "<<Node1 -> data;
    cout<<"\naddress of default constructor :- "<<Node1 -> next;

    Node* Node2 = new Node(12);
    cout<<"\ndata of parametrised constructor :- "<<Node2 -> data;
    cout<<"\naddress of the parametrised constructor :- "<<Node2 -> next;

    return 0;
}
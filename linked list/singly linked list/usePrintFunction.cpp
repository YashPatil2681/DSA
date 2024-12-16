#include<iostream>
using namespace std;

class Node{
    
    int Data;
    Node* Next;

public:

    Node(int);
    void InsertionNode(Node,int);
    void Display();
};


Node::Node(int n){
    Data = n;
    Next = NULL;
}
 
void Node::Display(){
    cout<<"\nData is Present in live node :- "<<Data;
    cout<<"\nAddress of the next node is :- "<<Next;
}



int main(){
    Node* Node1 = new Node(10);
    Node1->Display();
    return 0;
}
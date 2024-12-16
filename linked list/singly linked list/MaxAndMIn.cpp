#include<iostream>
#include<climits>
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

int Size(Node* &Head,int i=0){
    Node* temp = Head;
    while(temp != NULL){
        temp = temp->next_add;
        i++;
    }
    return i;
}

int Max(Node* &Head){
    int max = INT_MIN;
    Node* temp = Head;
    while(temp != NULL){
        if(temp->data>max){
            max = temp->data;
        }
        temp = temp->next_add;
    }
    return max;
}

int Min(Node* &Head){
    int min = INT_MAX;
    Node* temp = Head;
    while(temp != NULL){
        if(temp->data < min){
            min = temp->data;
        }
        temp = temp->next_add;
    }
    return min;
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
    Node* Node1 = new Node(0);
    Node* Head  = Node1;
    Print(Head);
    insertNode(Head,4);
    insertNode(Head,2);
    insertNode(Head,2);
    insertNode(Head,1);
    Print(Head);

    int result1 = Max(Head);
    cout<<"\nMaximum number in this linked list is :- "<<result1;

    int result2 = Min(Head);
    cout<<"\nMinimum number in this linked list is :- "<<result2;

    return 0;
}
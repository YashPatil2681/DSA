#include<iostream>
using namespace std;
class Node{
    int Roll_No;
    string name;
    float sgpa;

public:
    Node* next_add;
    Node();
    void Read();
    void Display();
    string getName();
};

Node::Node(){
    next_add = NULL;
}

string Node::getName(){
    return name;
}

void Node::Read(){
    cout<<"\n";
    cout<<"Enter roll no of student :- ";
    cin>>Roll_No;
    cout<<"Enter name of student :- ";
    cin>>name;
    cout<<"Enter sgpa of student :- ";
    cin>>sgpa;
}

void Node::Display(){
    cout<<endl;
    cout<<"\nPrint roll no of student :- "<<Roll_No;
    cout<<"\nPrint name of student :- "<<name;
    cout<<"\nPrint sgpa of student :- "<<sgpa;
}

class linkedList{
    Node* head;
    public:
    linkedList();
    void insertNode();
    void printNode();
    void deleteNode();
};

linkedList::linkedList(){
    head = NULL;
}

void linkedList::insertNode(){
    Node* newNode = new Node;
    newNode->Read();
    if( head == NULL ){
        head = newNode;
        newNode->next_add = head;
    }
    else{
        Node* temp = head;
        while( temp->next_add != head ){
            temp = temp->next_add;
        }
        temp->next_add = newNode;
        newNode->next_add = head;
    }
}

void linkedList::deleteNode(){
    Node* temp = head;
    Node* prev = NULL;
    Node* curr = head;
    if( head == nullptr ){
        cout<<"\nlinked list is empty :- ";
        return ;
    }
    string str;
    cout<<"\nEnter string you want to delete :- ";
    cin>>str;
    if( head->getName() == str ){
        if( head == head->next_add ){
            delete head;
            head = nullptr;
        }
        else{
            while( temp->next_add != head ){
                temp = temp->next_add;
            }
            Node* deleteNode = head;
            head = head ->next_add;
            temp->next_add = head;
            delete deleteNode;
        }
    }
    else{
        do{
            prev = curr;
            curr = curr->next_add;
            if( curr->getName() == str){
                prev->next_add = curr->next_add;
                delete curr;
            }
        }while( curr != head );
    }
}

void linkedList::printNode(){
    if( head == NULL ){
        cout<<"\nlinked list is empty :- ";
        return ;
    }
    else{
        Node* temp = head;
        do{
            temp->Display();
            temp = temp->next_add;
        }while( temp != head);
    }
}


int main(){
    linkedList l;
    l.insertNode();
    l.insertNode();
    l.insertNode();
    l.insertNode();
    l.printNode();
    l.deleteNode();
    l.printNode();
    return 0;
}
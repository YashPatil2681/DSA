#include<iostream>
using namespace std;

class Node{
    string data;
    public:
    Node* next_add;
    Node* prev_add;
    Node(string);
    void display();
};

Node::Node(string d){
    data = d;
    next_add = NULL;
    prev_add = NULL;
}

void Node::display(){
    cout<<data<<" ";
}

class textEditor{
    Node* head;
    Node* tail;
    public:
    textEditor();
    void insertText(string );
    void printText();
    void deleteText();
    void printInReverse();
    void SearchText();
};

textEditor::textEditor(){
    head = NULL;
    tail = NULL;
}

void textEditor::insertText(string str){
    Node* newNode = new Node(str);

    if ( head == NULL ){
        head = tail = newNode;
    }
    else {
        Node* temp;
        for ( temp = tail ; temp != NULL ; temp = temp->next_add );
        temp->next_add = newNode;
        newNode->prev_add = temp;
        tail = newNode;
    }
}

void textEditor::printText(){
    Node* temp = head;
    while( temp != NULL ){
        temp->display();
        temp = temp->next_add;
    }
    cout<<endl;
}

int main(){
    textEditor t;
    t.insertText("yash");
    t.printText();
    t.insertText("yash");
    t.printText();
    return 0;
}
#include<iostream>
using namespace std;

class Polynomial;
class Node{
    int coeff;
    int power;
public:
    Node* next_add;
    void Read();
    void Display();
    Node();    
    friend void addPolynomial(Polynomial P1,Polynomial P2);
};

Node::Node(){
    next_add = NULL;
}

void Node::Read(){
    cout<<"Enter coefficient :- ";
    cin>>coeff;
    cout<<"Enter power :- ";
    cin>>power;
}

void Node::Display(){
    cout<<"\n"<<coeff<<"x^"<<power;
    if( next_add != NULL){
        cout<<"+";
    }
}

class Polynomial{
    Node* head;
    public:
    Polynomial();
    void insertPolyomial();
    void displayPolynomial();
    friend void addPolynomial(Polynomial P1,Polynomial P2);
};

Polynomial::Polynomial(){
    head = NULL;
}

void Polynomial::insertPolyomial(){
    //create a new node 
    Node* newNode = new Node;
    newNode->Read();
    newNode->next_add = head;
    head = newNode;
}

void Polynomial::displayPolynomial(){
    Node* temp = head;
    while( temp != NULL){
        temp->Display();
        temp = temp->next_add;
    }
    cout<<endl;
}

void addPolynomial(Polynomial P1,Polynomial P2){
    Node *CN1,*CN2,*CN3;
    Node *nn = new Node;
    Polynomial P3;

    CN1 = P1.head;
    CN2 = P2.head;

    while( CN1 != NULL && CN2 != NULL ){
        if( P3.head == NULL ){
            P3.head = nn;
            CN3 = nn;
        }
        else{
            nn = new Node;
            CN3->next_add = nn;
            CN3 = CN3 ->next_add;
        }
        if( CN1->power > CN2->power ){
            nn->power = CN1->power;
            nn->coeff = CN1->coeff;
            CN1 = CN1->next_add;
        }
        else if( CN1->power < CN2->power ){
            nn->power = CN2->power;
            nn->coeff = CN2->coeff;
            CN2 = CN2->next_add;
        }
        else{
            nn->power = CN1->power;
            nn->coeff = CN1->coeff + CN2->coeff;
            CN1 = CN1->next_add;
            CN2 = CN2->next_add;
        }
    }
    while( CN1 != NULL ){
        if( P3.head == NULL ){
            P3.head = nn;
            CN3 = nn;
        }
        else{
            nn = new Node;
            CN3->next_add = nn;
            CN3 = CN3->next_add;
        }
        nn->power = CN1->power;
        nn->coeff = CN1->coeff;
        CN1 = CN1->next_add;
    }
    while( CN2 != NULL ){
        if( P3.head == NULL ){
            P3.head = nn;
            CN3 = nn;
        }
        else{
            nn = new Node;
            CN3->next_add = nn;
            CN3 = CN3->next_add;
        }
        nn->power = CN2->power;
        nn->coeff = CN2->coeff;
        CN2 = CN2->next_add;
    }
    P3.displayPolynomial();
}

int main(){
    Polynomial P1,P2;
    P1.insertPolyomial();
    P1.displayPolynomial();
    P2.insertPolyomial();
    P2.displayPolynomial();
    addPolynomial(P1,P2);
    return 0;
}
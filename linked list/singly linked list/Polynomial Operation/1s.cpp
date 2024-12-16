#include<iostream>
using namespace std;

class Polynomial;

class Node{
    int coeff;
    int pow;
    public:
    Node* next_add;
    Node(){
        next_add = NULL;
    }
    void read();
    void show();
    friend void addPolynomial(Polynomial P1,Polynomial P2);
};

void Node::read(){
    cout<<"\nEnter coeff is :- ";
    cin>>coeff;
    cout<<"\nEnter pow is :- ";
    cin>>pow;
}

void Node::show(){
    cout<<coeff<<"x^"<<pow;
    if( next_add != NULL){
        cout<<"+";
    }
}

class Polynomial{
    Node* head;
    public:
    Polynomial(){
        head = NULL;
    }
    void insertNode();
    void displayPolynomial();
    friend void addPolynomial(Polynomial P1,Polynomial P2);
};

void Polynomial::insertNode(){
    Node *newNode = new Node;
    newNode->read();
    newNode->next_add = head;
    head = newNode;
}

void Polynomial::displayPolynomial(){
    Node* temp = head;
    while( temp != NULL ){
        temp->show();
        temp = temp->next_add;
    }
    cout<<endl;
}

void addPolynomial(Polynomial P1,Polynomial P2){
    Node *CN1,*CN2,*CN3;

    Node* nn = new Node;
    Polynomial P3;

    CN1 = P1.head;
    CN2 = P2.head;

    while( CN1 != NULL && CN2 != NULL){
        if( P3.head == NULL ){
            P3.head = nn;
            CN3 = nn;
        }
        else{
            nn = new Node;
            CN3->next_add = nn;
            CN3 = CN3->next_add;
        }
        if(CN1->pow > CN2->pow){
            nn->pow = CN1->pow;
            nn->coeff = CN1->coeff;
            CN1 = CN1->next_add;
        }
        else if( CN1->pow < CN2->pow ){
            nn->pow = CN2->pow;
            nn->coeff = CN2->coeff;
            CN2 = CN2->next_add;
        }
        else{
            nn->pow = CN1->pow;
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
        nn->pow = CN1->pow;
        nn->coeff = CN1->coeff;
        CN1 = CN1->next_add;
    }

    while( CN2 != NULL ){
        if( P3.head == NULL){
            P3.head = nn;
            CN3 = nn;
        }
        else{
            nn = new Node;
            CN3->next_add = nn;
            CN3 = CN3->next_add;
        }
        nn->pow = CN2->pow;
        nn->coeff = CN2->coeff;
        CN2 = CN2->next_add;
    }
    P3.displayPolynomial();
}

int main(){
    Polynomial P1;
    Polynomial P2;
    P1.insertNode();
    P1.insertNode();
    P1.displayPolynomial();
    P2.insertNode();
    P2.insertNode();
    addPolynomial(P1,P2);
    return 0;
}
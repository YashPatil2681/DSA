#include<iostream>
using namespace std;

class node{
    string name;
    public:
    node* next_add;
    node();
    ~node();
    void read();
    void disp();
};

node::node(){
    next_add = NULL;
}

node::~node(){
    next_add = NULL;
}


void node::read(){
    cout<<"\nEnter name :- ";
    cin>>name;
}

void node::disp(){
    cout<<name<<" ";
}

class restaurant{
    node *front;
    node* rear;
    public:
    restaurant();
    ~restaurant();
    void AddPartyToWaitList();
    void SeatParty();
    void displayWaitList();
    bool isEmpty();
    bool isFull();
};

restaurant::restaurant(){
    front = NULL;
    rear  = NULL;
}

bool restaurant::isEmpty(){
    return front == NULL;
}

restaurant::~restaurant(){
    front = NULL;
    rear  = NULL;
}

void restaurant::AddPartyToWaitList(){
    node* newNode = new node;
    newNode->read();
    if( front == NULL ){
        front = rear = newNode;
    }
    else{
        rear->next_add = newNode;
        rear = newNode;
    }
}

void restaurant::SeatParty(){
    if ( front == NULL ){
        cout<<"\nqueue is empty :- ";
    }
    else{
        node* temp = front;
        front = front->next_add;
        delete(temp);
        if( front == NULL ){
            rear = NULL;
        }
    }
}

void restaurant::displayWaitList(){
    for ( node* curr = front ; curr != NULL ; curr = curr ->next_add){
        curr->disp();
    }
    cout<<endl;
}

int main(){
    restaurant r;
    int ch;
    char Ch;
   
    do{
        cout<<"\n1.Add Party to Waitlist " ;
        cout<<"\n2.Seat Party";
        cout<<"\n3.Display Waitlist ";
        cout<<"\nEnter ch :- ";
        cin>>ch;
        
        switch(ch){
            case 1:
                r.AddPartyToWaitList();
                break;
           
            case 2:
                r.SeatParty();
                break;
           
            case 3:
                r.displayWaitList();
                break;
           
            default:
            cout<<"\nenter corrext choice :- ";
        }
        cout<<"\ndo you want to continue (y/n) :- ";
        cin>>Ch;
    }while( Ch == 'y');
   
    cout<<"\nthank you !!! ";
    return 0;
}
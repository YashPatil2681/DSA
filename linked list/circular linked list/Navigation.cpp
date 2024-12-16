#include<iostream>
using namespace std;

class Node{
    string source;
    string destination;
    float time;
    float distance;
    float charges;
    public:
    Node* next;
    Node(string,string,float,float,float);
    void show();
    string getDestination();
};

Node::Node(string str,string d,float t,float di,float c){
    source = str;
    destination = d;
    time = t;
    distance = di;
    charges = c;
    next = NULL;
}

void Node::show(){
    cout<<"\nsource is :- "<<source;
    cout<<"\ndestinantion is :- "<<destination;
    cout<<"\ntime is :- "<<time;
    cout<<"\ndistance is :- "<<distance;
    cout<<"\ncharges is :- "<<charges;
}

string Node::getDestination(){
    return destination;
}

class Navigation{
    Node* head;
    public:
    Navigation(){
        head  = NULL;
    }
    void addRoute(string,string,float,float,float);
    void show();
    void removeRoute();
};

void Navigation::addRoute(string str,string d,float t,float di,float c){
    Node* newNode = new Node(str,d,t,di,c);
    if(head == NULL){
        head = newNode;
        newNode->next = head;
        return;
    }
    else{
        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

void Navigation::removeRoute(){
    if( head == NULL ){
        cout<<"\nroute list is empty :- ";
        return;
    }

    string str;
    cout<<"\nEnter route you want to delete :- ";
    cin>>str;

    Node* prev = NULL;
    Node* curr = head;
    if( head->getDestination() == str ){
        if( head == head->next ){
            delete head;
        }
        else{
            Node* temp = head;
            while( temp->next != head){
                temp = temp->next;
            }
            Node* nodeDelete = head;
            head = head->next;
            delete nodeDelete;
        }
    }
    else{
        do{
            prev = curr;
            curr = curr->next;
            if( curr->getDestination() == str){
                prev->next = curr->next;
                delete curr;
            }
        }while( curr != head );
    }
}

void Navigation::show(){
    Node* temp = head;
    do{
        temp->show();
        temp = temp->next;
    }while(temp->next != head);
    cout<<endl;
}

int main(){
    Navigation N;
    string source;
    string destination;
    float time;
    float distance;
    float charges;

    int ch;
    char Ch;

    do{
        cout<<"\n1.To add route :- ";
        cout<<"\n2.To show :- ";
        cout<<"\n3.To remove route :- ";
        cout<<"\nEnter ch :- ";
        cin>>ch;

        switch(ch){
            case 1:{
                cout<<"\nenter destination :- "<<destination;
                cout<<"\nenter source :- "<<source;
                cout<<"\nenter time to travell :- "<<time;
                cout<<"\nenter distance between source and destination :- "<<distance;
                cout<<"\nEnter charges :- "<<charges;
                N.addRoute(source,destination,time,distance,charges);
            }
            
            case 2:
                N.show();
                break;

            case 3:
                N.removeRoute();

            default:
                cout<<"\nyou entered wrong choice :- ";
        }
        cout<<"\ndo you want continue (y/n) :- ";
        cin>>Ch;
    }while(Ch == 'y');
    return 0;
}
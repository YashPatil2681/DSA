#include<iostream>
#define size 10
using namespace std;

class Node{
    int id;
    string name;
    public:
    Node* next_add;
    void read();
    void show();
    Node();
    int GetId();
};

Node::Node(){
    next_add = NULL;
}

void Node::read(){
    cout<<"\nEnter id of employee :- ";
    cin>>id;
    cout<<"Enter name of employee :- ";
    cin>>name;
}

void Node::show(){
    cout<<"\nname of employee is :- "<<name;
    cout<<"\nid of employee is :- "<<id;
}

int Node::GetId(){
    return id;
}

class Employee{
    int flag[size];
    Node Data[size];
    public:
    Employee();
    int hashFunction(int);
    void insert();
    void printHashTable();
    bool SearchTable();
};

Employee::Employee(){
    for( int i=0;i<size;i++ ){
        flag[i] = 0;
    }
}

int Employee::hashFunction(int id){
    return id % size;
}

void Employee::insert(){
    Node newR;
    newR.read();
    int id  = newR.GetId();
    int pos = hashFunction(id);
    if( flag[pos] == 0 ){
        Data[pos] = newR;
        flag[pos] = 1;
    }
    else{
        for(int i=0;i<size;i++){
            pos = (pos+i)%size;
            if( flag[pos] == 0 ){
                Data[pos] = newR;
                flag[pos] = 1;
                break;
            }
        }
    }
}

bool Employee::SearchTable(){
    int id;
    cout<<"\nEnter id :- ";
    cin>>id;
    int pos = hashFunction(id);
    int si;
    for( int i=0;i<size;i++ ){
        si = (pos+i) % size;
        if( flag[si] == 1  &&  Data[si].GetId() == id ){
            return true ;
        }
    }
    return false;
}

void Employee::printHashTable(){
    for( int i=0;i<size;i++ ){
        if( flag[i] == 1){
            cout<<"\nposition is :- "<<i<<endl;
            Data[i].show();
        }
        else{
            cout<<"\nEmployee data empty is at position :- "<<i<<endl;
        }
    }
}

int main(){
    Employee E;
    E.insert();
    E.insert();
    E.insert();
    E.printHashTable();
    return 0;
}
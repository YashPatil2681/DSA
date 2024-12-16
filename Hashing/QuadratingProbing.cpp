//quadratic probling 
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
    cout<<"\nenter id of employee :- ";
    cin>>id;
    cout<<"enter name of employee :- ";
    cin>>name;
    cout<<endl;
}

void Node::show(){
    cout<<"\nname of employee is :- "<<name;
    cout<<"\nid of employee is :- "<<id;
    cout<<endl;
}

int Node::GetId(){
    return id;
}

class Employee{
    public:
    int flag[size];
    Node E[size];
    Employee();
    int hashFunction(int);
    void insert();
    void PrintHashTable();
};

Employee::Employee(){
    for(int i=0;i<size;i++){
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
        E[pos] = newR;
        flag[pos] = 1;
    }
    else{
        for( int i=0;i<size;i++){
            pos = (pos+(i*i)) %size;
            if( flag[pos] == 0 ){
                E[pos] = newR;
                flag[pos] = 1;  
                break; 
            }
        }
    }
}

void Employee::PrintHashTable(){
    for(int i=0;i<size;i++){
        if( flag[i] == 1 ){
            cout<<"\nposition is at "<<i<<endl;
            E[i].show();
        }
        else{
            cout<<"\nposition is empty at :- "<<i<<endl;
        }
    }
}

int main(){
    Employee E;
    E.insert();
    E.insert();
    E.PrintHashTable();
}
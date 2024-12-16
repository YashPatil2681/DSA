#include<iostream>
#define size 10
using namespace std;

/*
    h1(key) + i*h2(key)
    h1 = key % size
    h2 = R - (key % R)
    R is prime number before that size number   
*/

class Node{
    int id;
    string name;
    public:
    Node* next_add;
    Node();
    void read();
    void show();
    int get_id();
};

Node::Node(){
    next_add = NULL;
}

void Node::read(){
    cout<<"\nEnter id :- ";
    cin>>id;
    cout<<"Enter name :- ";
    cin>>name;
    cout<<endl;
}

void Node::show(){
    cout<<"\nid is :- "<<id;
    cout<<"\nname is :- "<<name;
    cout<<endl;
}

int Node::get_id(){
    return id;
}

class Employee{
    int flag[size];
    Node E[size];
    public:
    Employee();
    void insert();
    void PrintHashTable();
    int hashFunction1(int);
    int hashFunction2(int);
};

Employee::Employee(){
    for(int i=0;i<size;i++){
        flag[i] = 0;
    }
}

int Employee::hashFunction1(int id){
    return id % size;
}

int Employee::hashFunction2(int id){
    return 7 - ( id % 7);
}

void Employee::insert(){
    Node newR;
    newR.read();
    int id  = newR.get_id();
    int pos1 = hashFunction1(id);
    if( flag[pos1] == 0 ){
        E[pos1] = newR;
        flag[pos1] = 1;
    }
    else{
        for( int i=0;i<size;i++){
            int pos2 = hashFunction2(id);
            int pos  = (pos1 + i*(pos2))%size;
            if( flag[pos] == 0 ){
                E[pos] = newR;
                flag[pos] = 1;
                return ;
            }
            else if( i == size -1 ){
                cout<<"\nhash Function is Full :- ";
                return;
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
    E.insert();
    E.PrintHashTable();
    return 0;
}
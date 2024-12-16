#include<iostream>
#define size 10
using namespace std;

class Queue{
    int arr[size];
    int rear,front;
    public:
    Queue();
    void enqueue(int);
    void print();
    int dequeue();
};

Queue::Queue(){
    rear = -1;
    front = -1;
}

void Queue::enqueue(int val){
    if( ( front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
        cout<<"\nQueue is Full :- ";
    }
    else if ( front == -1){
        front = rear = 0;
        arr[rear] = val;
    }
    else if( ( rear == size-1 && front != 0)){
        rear = 0;
        arr[rear] = val;
    }
    else{
        rear++;
        arr[rear] = val;
    }
}

void Queue::print(){
    if( front == -1 ){
        cout<<"\nQueue is empty :- ";
    }
    cout<<"\nQueue is :- ";
    if ( rear >= front ){
        for ( int i = front ; i <= rear ; i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        for (int i=front;i<size;i++){
            cout<<arr[i]<<" ";
        }
        for ( int i=0;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}

int Queue::dequeue(){
    if( front == -1 ){
        cout<<"\nQueue is empty :- ";
        return -1;
    }
    else if( front == rear ){
        front = rear = -1;
    }
    else if( front == size -1 ){
        front = 0;
    }
    else{
        front++;
    }
    return arr[front];
}

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.print();
    int t =q.dequeue();
    cout<<t<<endl;
    q.print();
    return 0;
}
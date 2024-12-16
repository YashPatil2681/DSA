#include<iostream>
#define size 10
using namespace std;

class Queue{
    int arr[size];
    int front ;
    int rear;
    public:
    Queue();
    bool isEmpty();
    bool isFull();
    void enqueueByFront(int);
    void enqueueByBack(int);
    int dequeueByFront();
    int dequeueByBack();
    void Print();
};

Queue::Queue(){
    front = -1;
    rear = -1;
}

bool Queue::isEmpty(){
    return front == -1;
}

bool Queue::isFull(){
    return ((front == -1) && (rear == size-1) || rear == (front-1)%(size-1));
}

void Queue::enqueueByFront(int val){
    if( isFull()){
        cout<<"\nQueue is Full :- ";
        return;
    }
    else if( front == -1){
        front = rear = 0;
        arr[front] = val;
    }
    else if( front == 0 ){
        front = size -1;
        arr[front] = val;
    }
    else{
        front--;
        arr[front] = val;
    }

}

void Queue::enqueueByBack(int val){
    if( isFull() ){
        cout<<"\nQueue is Full :- ";
        return;
    }
    else if( front == -1){
        front = rear = 0;
        arr[rear] = val;
    }
    else if( rear == size-1 && front != 0 ){
        rear = 0;
        arr[rear] = val;
    }
    else{
        rear ++;
        arr[rear] = val;
    }
}

int Queue::dequeueByFront(){
    if ( isEmpty() ){
        cout<<"\nQueue is Empty :- ";
    }
    else if( front == rear ){
        front = rear = -1;
    }
    else if( front == size-1){
        rear = 0;
    }
    else{
        front++;
    }
    return arr[front];
}

int Queue::dequeueByBack(){
    if ( isEmpty() ){
        cout<<"\nQueue is Empty :- ";
    }
    else if( front == rear ){
        front = rear = -1;
    }
    else if( rear == 0 ){
        rear = size -1;
    }
    else{
        rear--;
    }
    return arr[rear];
}

void Queue::Print(){
    if ( rear >= front ){
        for( int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        for (int i=front;i<size;i++){
            cout<<arr[i]<<" ";
        }
        for (int i=0;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){
    Queue Q;
    Q.enqueueByFront(30);
    Q.enqueueByFront(20);
    Q.enqueueByFront(10);
    Q.enqueueByBack(40);
    Q.enqueueByBack(50);
    Q.Print();
    cout<<endl<<Q.dequeueByBack()<<endl;
    Q.Print();
    Q.dequeueByFront();
    cout<<endl;
    Q.Print();
    return 0;
}
#include<iostream>
#define size 10
using namespace std;

class Queue{
    int arr[size];
    int front;
    int rear;
    public:
    Queue();
    bool isEmpty();
    bool isFull();
    void enqueue(int);
    int dequeue();
    int Front();
    void Print();
};

Queue::Queue(){
    front =  rear = -1;
}

bool Queue::isEmpty(){
    return front == rear;
}

bool Queue::isFull(){
    return front == size-1;
}

int Queue::Front(){
    if( isEmpty()){
        return -1;
    }
    else{
        return arr[front];
    }
}

void Queue::enqueue(int data){
    if ( isFull()){
        cout<<"\nQueue is full you dnot enter "<<data<<"\n";
    }
    else{
        arr[rear] = data;
        rear++;
    }
}

int Queue::dequeue(){
    if( isEmpty()){
        cout<<"\nQueue is Empty :- ";
        return -1;
    }
    else{
        int ans = arr[front];
        front++;
        return ans;
    }
}

void Queue::Print(){
    for ( int i = front;i<rear;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Queue Q;
    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.enqueue(40);
    cout<<"\nfront element is :- "<<Q.Front()<<endl;
    Q.enqueue(50);
    Q.Print();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.Print();
    Q.dequeue();
    Q.dequeue();
    Q.Print();
    return 0;
}
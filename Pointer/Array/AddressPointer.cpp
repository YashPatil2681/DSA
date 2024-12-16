#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1,2,3,5};
    cout<<"Address of this array is :- "<<&arr[0];
    cout<<"\nAddress of this array is :- "<<&arr;
    cout<<"\nAddress of this array is :- "<<arr;
    
    int *ptr = &arr[0];
    cout<<"\nAddress of this pointer ptr is :- "<<ptr;
    cout<<"\nvalue of pointer *ptr is :- "<<*ptr;
    cout<<"\nAddress of this pointer is :- "<<&ptr;
    return 0;
}
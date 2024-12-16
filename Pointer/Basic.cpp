#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of N :- ";
    cin>>n;
    cout<<"Value of N :- "<<n;
    cout<<"\nAddress of N is :- "<<&n;
    int *ptr = &n;
    n += 1;
    cout<<"\nvalue of n by it's pointer :- "<<*ptr;
    (*ptr)++;
    cout<<"\nNew Value of N :- "<<n;
    return 0;
}
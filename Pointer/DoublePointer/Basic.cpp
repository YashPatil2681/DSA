#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N :- ";
    cin>>n;
    int *ptr1 = &n;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    cout<<"Print value of N :- "<<n;
    cout<<"\nvalue of this pointer1 :- "<<*ptr1;
    cout<<"\nvalue of this pointer2 :- "<<**ptr2;
    *ptr1 += 1;
    cout<<"\nvalue of this pointer3 :- "<<***ptr3;

    cout<<endl<<endl<<endl;

    
    cout<<"\naddress of n is :- "<<&n;
    cout<<"\naddress of *ptr1 is :- "<<ptr1;
    cout<<"\naddress of **ptr2 is :-  "<<*ptr2;

    cout<<endl<<endl<<endl;
    
    cout<<"\nPosition address of the n :- "<<&n;
    cout<<"\nPosition address of the ptr1 :- "<<&ptr1;
    cout<<"\nposition address of the ptr2 :- "<<&ptr2;
    cout<<"\nPosition address of the ptr3 :- "<<&ptr3;
    return 0;
}
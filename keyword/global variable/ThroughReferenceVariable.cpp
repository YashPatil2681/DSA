//global variable :-  a variable can share between a different function 

#include<iostream>
using namespace std;

void A(int& n){
    cout<<"value of n is :- ";
    cout<<n;
    n++;
    // B(n);
}

void B(int& n){
    cout<<"\nvalue of n is :- ";
    cout<<n;
}

int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;
    // A(n);

    {
        int n = 4;
        cout<<"\nin bracket value of n is "<<n;
    }

    cout<<"\nvalue of n is :- "<<n;
    return 0;
}
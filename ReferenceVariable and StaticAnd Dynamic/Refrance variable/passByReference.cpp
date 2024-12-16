#include<iostream>
using namespace std;
void Update1(int n){
    // it is pass by value function 
    n++;
}

void Update2(int& n){
    // it is pass by reference function 
    n++;
}
int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;
    cout<<"Value of n is :- "<<n;
    Update1(n);
    cout<<"\nAfter pass by value n is :- "<<n;
    cout<<endl<<endl<<endl;


    cout<<"value of n is :- "<<n;
    Update2(n);
    cout<<"\nAfter pass by reference n is :- "<<n;

    return 0;
}
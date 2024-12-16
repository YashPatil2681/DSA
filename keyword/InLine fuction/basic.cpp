/*  inline function :- inline function are written in single line they are called as inline 
they are defined with keyword inline 
benefit :-
good redeabilty
no extra memory uses 
no function call overhead 
*/
#include<iostream>
using namespace std;

inline int max(int n1,int n2){
    if(n1>n2){      return n1;}
    else {         return n2;}  
}

int main(){
    int n1;
    cout<<"Enter n1 :- ";
    cin>>n1;
    int n2;
    cout<<"Enter n2 :- ";
    cin>>n2;
    int ans = max(n1,n2);
    cout<<"maximum number in "<<n1<<" & "<<n2<<" is :- "<<ans;
    return 0;
}
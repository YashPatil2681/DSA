/*  Global variable :- a variable can share with different function 
    bad practice any fuction can change value or update value */

#include<iostream>
using namespace std;

int n = 12; 

void N(){
    cout<<"\nvalue of n is :- "<<n;
}

int main(){
    cout<<"\nvalue of n is :- "<<n;
    N();
    return 0;    
}
#include<iostream>
using namespace std;;
int main(){
    int n = 5;
    int *ptr = 0;
    cout<<"\nValue of pointer of n is :- "<<*ptr;
    
    
    ptr = &n;
    n++;
    cout<<"\nValue of pointer of n is :- "<<*ptr;

    return 0;
}
#include<iostream>
using namespace std;
void Print(int *n){
    cout<<"\nPrint *num is :- "<<*n;
    cout<<"\nPrint Address :- "<<n;
}

void UpdateValue(int *n){
    *n += 1;  /*  * used for print the value or deal with value datamember       */
    cout<<"\nUpdated value of *num is :- "<<*n;
    n += 1;
    cout<<"\nPrint Address :- "<<n;
}

int main(){
    int num;
    cout<<"Enter num :- ";
    cin>>num;
    int *ptr = &num;
    Print(ptr);
    UpdateValue(ptr);
}
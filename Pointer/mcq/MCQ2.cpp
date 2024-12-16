#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;
    int *ptr = 0;
    // ptr = &n;
    *ptr = n;   
    /*               The problem is with the line *ptr = n;. 
    Here, ptr is a null pointer (initialized to 0), and dereferencing it 
    will cause a segmentation fault.
      */
    cout<<"*ptr is equal to = "<<*ptr<<endl;
    return 0;
}
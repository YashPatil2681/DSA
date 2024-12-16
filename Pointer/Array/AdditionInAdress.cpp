#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int *ptr = &arr[0];
    cout<<"ptr is :- "<<ptr;
    ptr += 1;
    cout<<"\nNew ptr is :- "<<ptr;
    return 0;
}
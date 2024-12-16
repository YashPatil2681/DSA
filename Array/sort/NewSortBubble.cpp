#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,2,3,1,5};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nsize of this array is :- "<<size;
    return 0;
}
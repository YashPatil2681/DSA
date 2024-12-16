#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}
/*
    1 2 3 0 -1 -2 -3

*/

int Sum(int arr[],int size){
    if(size == 0){
        return 0;
    }
    else if(size == 1){
        return arr[0];
    }
    
    return arr[0] + Sum(arr+1,size-1);
}
int main(){
    int arr[] = {1,2,3,0,-1,-2,-3};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nSize of this array is :- "<<size;
    cout<<"\nPrint array arr[size] :- ";
    Print(arr,size);
    cout<<"\nSum of array is :- "<<Sum(arr,size);
    return 0;
}
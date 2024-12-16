#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of the array is : "<<size;
    cout<<"\nOriginal array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
        
    int i=0;
    int j=size-1;
    while(i<j){
        int temp = arr[i];
        arr[i]  =  arr[j];
        arr[j]  = temp;
        i++;
        j--;
    }
    cout<<"\nReversed array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
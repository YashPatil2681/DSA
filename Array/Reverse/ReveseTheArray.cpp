#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void Reverse(int arr[],int size){
    for(int i=0;i<(size/2);i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    cout<<"\nRevesed array is : ";
    Print(arr,size);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array is : "<<size;
    cout<<"\nOrigianl array is : "; 
    Print(arr,size);
    Reverse(arr,size);
    return 0;
}
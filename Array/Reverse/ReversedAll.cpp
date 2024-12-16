#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void Reverse_n(int arr[],int size){
    for(int i=0;i<(size/2);i++){
        int temp = arr[i];
        arr[i]   = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}

void Reverse_i_j(int arr[],int size,int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
           int temp = arr[i];
           arr[i]   = arr[j];
           arr[j]   =  temp;
    }
}

void Brr(int arr[],int size){
    int brr[size];
    for(int i=0;i<size/2;i++){
        brr[i] = arr[size-i-1];
    }
}

int main(){
    int arr[] = {5,4,3,2,1};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of this array is : "<<size;
    cout<<"\nPrint array as it is : ";
    Print(arr,size);
    Reverse_n(arr,size);
    cout<<"\nReversed array is : ";
    Print(arr,size);
    int i = 0;
    int j = size-1;
    Reverse_i_j(arr,size,i,j);
    cout<<"\nReversed array is : ";
    Print(arr,size);
    Brr(arr,size);
    cout<<"\nReversed array is : ";
    Print(arr,size);
    return 0;
}
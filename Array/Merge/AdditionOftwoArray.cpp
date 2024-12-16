#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void Merge(int arr[],int size1,int brr[],int size2){
    for(int i=0;i<size2;i++){
        arr[size1+i] = brr[i];
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size1 = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of the arr[] is : "<<size1;
    int brr[] = {6,7,8};
    int size2 = sizeof(brr)/sizeof(brr[0]);
    cout<<"\nSize of the brr[] is : "<<size2;
    cout<<"\nPrint array is arr[size1] :- ";
    Print(arr,size1);
    cout<<"\nPrint array is brr[size2] :- ";
    Print(brr,size2);
    Merge(arr,size1,brr,size2);
    cout<<"\nPrint merged array arr[size1] :- ";
    Print(arr,size1);
    return 0;
}
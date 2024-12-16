#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void Sort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){
    int arr[] = {6,5,4,3,2,1};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of this array is :- "<<size;
    cout<<"\nPrint array arr[size] :- ";
    Print(arr,size);
    Sort(arr,size);
    cout<<"\nSorted array arr[size] :- ";
    Print(arr,size);
    return 0;
}
#include<iostream>
using namespace std;
void Print(int arr[],int size,int i=0){
    if(i >= size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

void BubbleSort(int arr[],int size){
    if(size==0 || size==1){
        return ;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,size-1);
}

int main(){
    int arr[] = {17,11,23,12,16};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nSize of this array is :- "<<size;
    cout<<"\nPrint array is :- ";
    Print(arr,size);
    BubbleSort(arr,size);
    cout<<"\nSorted array is :- ";
    Print(arr,size);
    return 0;
}
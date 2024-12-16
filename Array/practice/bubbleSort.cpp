#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}
/*  32  21  10  03  04
pass 1
    21  32  10  03  04
    21  10  32  03  04 
    21  10  03  32  04
    21  10  03  04  32
pass 2
    10  21  03  04  32
    10  03  21  04  32 
    10  03  04  21  32
pass 3
    03  10  04  21  32
    03  04  10  21  32

*/
void BubbleSort(int arr[],int size){
    bool flag ;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

/*
    32 21 10 03 04
selction sort:-
    03 21 10 32 04
    03 04 10 32 21
    03 04 10 32 21
    03 04 10 21 32 

*/
void selectionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        int min = i;
        for(int j=i+1;j<size;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(i != min){
            swap(arr[i],arr[min]);
        }
    }
}


void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j = i -1;
        while(j>=0 && temp>arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[] = {32,21,10,3,4};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nSize of this array is :- "<<size;
    cout<<"\nPrint array arr[size] :- ";
    Print(arr,size);
    BubbleSort(arr,size);
    cout<<"\nBubble Sorted array arr[size] :- ";
    Print(arr,size);
    selectionSort(arr,size);
    cout<<"\nSelection sorted array arr[size] :- ";
    Print(arr,size);
    cout<<"\nInsertion sorted array arr[size] :- ";
    Print(arr,size);
    return 0;
}
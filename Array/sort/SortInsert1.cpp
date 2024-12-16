#include<iostream>
using namespace std;
/* 
    23| 12  32  6  50
    12  23| 32  6  50
    12  23  32 |6  50 
    6   12  23 32| 50
    6   12  23 32  50
*/

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void Sort(int *arr,int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j = i -1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[] = {23,12,32,6,50};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of this array arr[size] :- "<<size;
    cout<<"\nPrint this array arr[size] :- ";
    Print(arr,size);
    cout<<"\nSorted array arr[size] :- ";
    Sort(arr,size);
    Print(arr,size);
    return 0;
}
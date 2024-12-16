#include<iostream>
using namespace std;

void Print(int arr[],int size,int i = 0){
    if( i >= size ){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

void insertionSort( int arr[],int size ){
    for ( int i=1;i<size;i++){
        int min = arr[i];
        int j = i - 1;
        while( j >= 0 && arr[j] > min ){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[ j + 1] = min;
    }
}

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nsize of this array is :- "<<size;
    cout<<"\nprint array :- ";
    Print(arr,size);
    insertionSort(arr,size);
    cout<<"\nsorted array is :- ";
    Print(arr,size);
    return 0;
}
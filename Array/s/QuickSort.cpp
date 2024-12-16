#include<iostream>
using namespace std;

void Print(int arr[],int size,int i = 0){
    if( i >= size ){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

int Partition(int *arr,int size,int start,int end){
    int pivot = arr[start];
    int i = start+1;
    int j = end;
    //
    do{
        do{
            i++;
        }while ( pivot >= arr[i] );
        do{
            j--;
        }while ( pivot < arr[j]);
        if ( i < j ){
            swap( arr[i],arr[j]);
        }
    }while ( i < j);
    swap( arr[start],arr[j]);
    return j;
}

void QuickSort(int *arr,int size,int start,int end){
    if ( start < end ){
        int PI = Partition(arr,size,start,end+1);
        QuickSort(arr,size,start,PI-1);
        QuickSort(arr,size,PI+1,end);
    }
}

int main(){
    int arr[] = {9,8,7,6,5,4};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nsize of this array is :- "<<size;
    cout<<"\nprint array :- ";
    Print(arr,size);
    int start = 0;
    int end = size - 1;
    QuickSort(arr,size,start,end);
    cout<<"\nprint sorted array is :- ";
    Print(arr,size);
    return 0;
}
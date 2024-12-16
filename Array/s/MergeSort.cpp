#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if ( i >= size ){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

void Merge(int *arr,int size,int start,int end,int mid){
    int left = start;
    int right = mid +1 ;
    int i = 0;
    int temp[size];

    while ( left <= mid && right <= end ){
        if ( arr[left] < arr[right] ){
            temp[i++] = arr[left++];
        }
        else{
            temp[i++] = arr[right++];
        }
    }

    while( left <= mid ){
        temp[i++] = arr[left++];
    }

    while ( right <= end ){
        temp[i++] = arr[right++];
    }
           
    for ( int j=0; j <i ;j++){
        arr[j+ start] = temp[j];
    }
}

void MergedSort(int* arr,int size,int start,int end){
    if ( start >= end ){
        return ;
    }
    int mid = (start+end)/2;
    //left part 
    MergedSort(arr,size,start,mid);
    //right part 
    MergedSort(arr,size,mid+1,end);
    //
    Merge(arr,size,start,end,mid);

}

int main(){
    int arr[] = {9,8,7,6,5,4};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nsize of this array is :- "<<size;
    cout<<"\nprint array :- ";
    Print(arr,size);
    int start = 0;
    int end = size - 1;
    MergedSort(arr,size,start,end);
    cout<<"\nprint sorted array is :- ";
    Print(arr,size);
    return 0;
}
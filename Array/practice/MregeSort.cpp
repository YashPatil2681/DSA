#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

void Merge(int arr[],int size,int low,int high,int mid){
    int left = low;
    int right = mid + 1;
    int temp[size];
    int i = 0;
    while(left <= mid  && right <= high){
        if(arr[left]<arr[right]){
            temp[i++] = arr[left++];
        }
        else{
            temp[i++] = arr[right++];
        }
    }
    while(left <= mid){
        temp[i++] = arr[left++];
    }
    while(right <= high){
        temp[i++] = arr[right++];
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

void MergeSort(int arr[],int size,int low,int high){
    int mid = (low+high)/2;
    if(low >= high){
        return ;
    }
    
    //left part 
    MergeSort(arr,size,low,mid);
    //right part
    MergeSort(arr,size,mid+1,high);
    //merge sort
    Merge(arr,size,low,high,mid);
}

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nsize of this array arr[size] :- "<<size;
    cout<<"\nPrint array arr[size] :- ";
    Print(arr,size);
    int low = 0;
    int high = size-1;
    MergeSort(arr,size,low,high);
    cout<<"\nPrint sorted array is :- ";
    Print(arr,size);
    return 0;
}
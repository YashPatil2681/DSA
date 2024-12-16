#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

void Merge(int arr[],int size,int low,int high){
    int i = 0;
    int left = low;
    int mid  = (low+high)/2;
    int right = mid+1;
    int temp[size];
    while(left <= mid && right <= high){
        if(arr[left]<arr[right]){
            temp[i] = arr[left];
            i++;
            left++;
        }
        else{
            temp[i] = arr[right];
            i++;
            right++;
        }
    }
    while(left <= mid){
        temp[i] = arr[left];
        left++;
        i++;
    }
    while(right <= high){
        temp[i] = arr[right];
        right++;
        i++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

void MergedSort(int arr[],int size,int low,int high){
    int i =0;
    int left = low;
    
    if(low >= high){
        return;
    }
    int mid = (low+high)/2;
    int right = mid+1;
    //left
    MergedSort(arr,size,low,mid);
    //right
    MergedSort(arr,size,mid+1,high);
    //
    Merge(arr,size,low,high);
}

int main(){
    int arr[] = {96,94,88,85,11,0,3};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of this array is :- "<<size;
    cout<<"\nPrint array arr[size] :- ";
    Print(arr,size);
    int low =  0;
    int high = size-1;
    MergedSort(arr,size,low,high); 
    cout<<"\nSorted array is :- ";
    Print(arr,size);
    return 0;
}
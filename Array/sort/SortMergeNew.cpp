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
    int left = low;
    int mid  = (low+high)/2;
    int right = mid+1;
    int i =0;
    int temp[size];
    while(left<=mid && right<= high ){
        if(arr[left]<arr[right]){
            temp[i] = arr[left];
            left++;
            i++;
        }
        else{
            temp[i] = arr[right];
            right++;
            i++;
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

void MergeSort(int arr[],int size,int low,int high){
    if(low >= high){
        return;
    }
    
    int mid  = (low+high)/2;
    //left
    MergeSort(arr,size,low,mid);
    //right
    MergeSort(arr,size,mid+1,high);
    //
    Merge(arr,size,low,high);
}

int main(){
    int arr[] = {42,35,33,28,19,10,3};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of thie array is :- "<<size;
    cout<<"\nPrint array :- ";
    Print(arr,size);
    int low = 0;
    int high = size - 1;
    MergeSort(arr,size,low,high);
    cout<<"\nPrint oerted array is :- ";
    Print(arr,size);
    return 0;
}
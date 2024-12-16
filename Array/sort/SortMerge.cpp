#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

void Merge(int *arr,int size,int s,int e){
    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int MainArrayIndex = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[MainArrayIndex++];
    }
    int k = mid + 1;
    for(int i=0;i<len2;i++){
        second[i] = arr[MainArrayIndex++];
    }

    int index1 = 0;
    int index2 = 0;

    MainArrayIndex = s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[MainArrayIndex++] = first[index1++];
        }
        else{
            arr[MainArrayIndex++] = second[index2++];
        }
    }

    while(index1 <len1){
        arr[MainArrayIndex++] = first[index1++];
    }

    while(index2 < len2){
        arr[MainArrayIndex++] = second[index2++];
    }
}

void MergeSort(int arr[],int size,int s,int e){
    if(s >= e){
        return;
    }
    int mid = (s+e)/2;
    // left part
    MergeSort(arr,size,s,mid-1);
    // right part
    MergeSort(arr,size,mid+1,size-1);

    //Merge sort
    Merge(arr,size,s,e);
    
}

int main(){
    int arr[] = {36,30,21,19,18,17};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nSize of this array is :- "<<size;
    cout<<"\nPrint array :- ";
    Print(arr,size);
    int s = 0;
    int e = size;
    MergeSort(arr,size,s,e);
    cout<<"\nPrint sorted array is :- ";
    Print(arr,size);
    return 0;
}
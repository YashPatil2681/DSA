#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}
/*
    99 69 36 32 12 25 26
pass 1
    69 99 36 32 12 25 26 
    69 36 99 32 12 25 26 
    69 36 32 99 12 25 26
    69 36 32 12 99 25 26 
    69 36 32 12 25 99 26 
    69 36 32 12 25 26 99 
pass 2
    36 69 32 12 25 26 99
    36 32 69 12 25 26 99
    36 32 12 69 25 26 99 
    36 32 12 25 69 26 99
    36 32 12 25 26 69 99
pass 3
    32 36 12 25 26 69 99 
    32 12 36 25 26 69 99 
    32 12 25 36 26 69 99
    32 12 25 26 36 69 99
pass 4 
    12 32 25 26 36 69 99 
    12 25 32 26 36 69 99
    12 25 26 32 36 69 99

*/
void BubbleSort(int arr[],int size,int i=0){
    if(size == 0  || size==1){
        return ;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,size-1);
}

void show(int arr[],int size,int i,int j){
    cout<<"\n after change mid array is :- ";
    for(int t=i;t<=j;t++){
        cout<<arr[t]<<" ";
    }
}
bool BianarySearch(int arr[],int size,int i,int j,int key){
    if(i >j){
        return false;
    }
    int mid = (i+j)/2;
    show(arr,size,i,j);
    cout<<"\nafter change the value arr[mid] :- "<<arr[mid];
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid] > key){
        return BianarySearch(arr,size,i,mid-1,key);
    }
    else{
        return BianarySearch(arr,size,mid+1,j,key);
    }
}

int main(){
    int arr[] = {99,69,36,32,12,25,26};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of this array is :- "<<size;
    cout<<"\nPrint array is :- ";
    Print(arr,size);
    BubbleSort(arr,size);
    cout<<"\nSorted array is :- ";
    Print(arr,size);
    int i =0;
    int j = size-1;
    int key;
    cout<<"\nenter key element :- ";
    cin>>key;
    if(BianarySearch(arr,size,i,j,key)){
        cout<<"\nElement is found in this array ";
    }
    else{
        cout<<"\nElement is not found in this array ";
    }
    return 0;
}
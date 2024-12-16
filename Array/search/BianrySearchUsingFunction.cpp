#include<iostream>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int Bianary(int arr[],int size,int key){
    int start = 0;
    int end   = size-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
    
}
int main(){
    int arr[] = {1,3,4,7,8,9};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of the array is : "<<size;
    cout<<"\nPrint original array is : ";
    Print(arr,size);
    int key;
    cout<<"\nEnter key element is : ";
    cin>>key;
    int Result = Bianary(arr,size,key);
    if(Result==(-1)){
        cout<<"\nNo , Element is not found In this array ";
    }
    else{
        cout<<"Yes , Element is found In this array at index "<<Result;
    }
    
}
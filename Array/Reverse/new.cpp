#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    for( int i=0;i<(size/2);i++){
        swap(arr[i],arr[size-1-i]);
    }
}

void reverse1_(int arr[],int size){
    int start = 0;
    int end = size - 1;
    for( int i=start,j=end;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
}

int main(){
    int arr[] = {8,7,6,5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nSize of this array is :- "<<size;
    //reverse(arr,size);
    reverse1_(arr,size);
    cout<<"\nsorted array is :- ";
    for( int i=0;i<size;i++ ){
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void AlterNateSwap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    cout<<"\nArray after alternate swap is : ";
    Print(arr,size);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of the Array is : "<<size;
    cout<<"\nPrint original array is : ";
    Print(arr,size);
    AlterNateSwap(arr,size);
}
#include<iostream>
#include<vector>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

int* arr2Timea(int arr[],int size){
    int* Bigarr = new int[2*size];
    
    for(int i=0;i<size;i++){
        Bigarr[i] = arr[i];
    }

    for(int i=0;i<size;i++){
        Bigarr[i+size] = arr[i];
    }
    return Bigarr;
}

int main(){
    int arr[] = {1,2,3};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nSize of this array is :- "<<size;

    cout<<"\nPrint array :- ";
    Print(arr,size);

    int* newArr = arr2Timea(arr,size);
    Print(arr,size*2);

    delete[] newArr;
    return 0;
}
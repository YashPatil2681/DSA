#include<iostream>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void ZeroShift(int arr[],int size){
    int j = 0;
    for(int i=0;i<size;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"Print array arr[size] : ";
    Print(arr,size);
    cout<<"\nsize of the array arr[size] : "<<size;
    ZeroShift(arr,size);
    cout<<"\nZero shift array arr[size] : ";
    Print(arr,size);
    return 0;
}
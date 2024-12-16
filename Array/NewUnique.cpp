#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int Unique(int arr[],int size){
    int Ans = 0;
    for(int i=0;i<size;i++){
        Ans ^= arr[i];
    }
    return Ans;
}
int main(){
    int arr[] = {1,2,3,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of the array is : "<<size;
    cout<<"\nPrint array : ";
    Print(arr,size);
    cout<<"\nUnique element in this array is : "<<Unique(arr,size);
    return 0;
}
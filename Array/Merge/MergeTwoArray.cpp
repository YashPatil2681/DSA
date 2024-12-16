#include<iostream>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void Merge(int crr[],int size,int arr[],int size1,int brr[],int size2){
    int i,j,k;
    i=j=k=0;
    while(i<size1 && j<size2){
        if(arr[i]<brr[j]){
            crr[k++] = arr[i++];
        }
        else{
            crr[k++] = brr[j++];
        }
        
    }
    while(i<size1){
        crr[k++] = arr[i++];
    }
    while(j<size2){
        crr[k++] = brr[j++];
    }
    cout<<"\nPrint Merged sorted array : ";
    Print(crr,size);
}
int main(){
    int arr[] = {1,0,9,8,3};
    int size1 = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nSize of this array arr[size1] : "<<size1;
    cout<<"\nPrint array arr[size1] : ";
    Print(arr,size1);
    int brr[] = {2,4,6,9};
    int size2 = sizeof(brr)/sizeof(brr[0]);
    cout<<"\nsize of this array brr[size2] : "<<size2;
    cout<<"\nprint array brr[size2]  :  ";
    Print(brr,size2);
    int size = size1 + size2;
    int crr[size];
    cout<<"\nsize of the array crr[size] : "<<size;
    Merge(crr,size,arr,size1,brr,size2);
    return 0;
}
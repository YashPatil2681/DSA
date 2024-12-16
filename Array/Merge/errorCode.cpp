#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void Merge(int crr[],int size,int arr[],int size1,int brr[],int size2){
    int i,j,k;
    i = j = k = 0;
    while(i<size1  &&  j<size2){
        if(arr[i]<brr[j]){
            crr[k++] = arr[i++];
        }
        else{
            crr[k++] = brr[j++];
        }
    }
    while(i<size1){
        if(arr[i]<brr[j]){
            crr[k++] = arr[i++];
        }
    }
    while(j<size2){
        if(arr[i]>brr[j]){
            crr[k++] = brr[j++];
        }
    }
}

int main(){
    int arr[] = {10,9,8,7,6};
    int size1  = sizeof(arr)/sizeof(arr[0]);
    cout<<"Print array arr[size1] : ";
    Print(arr,size1);
    cout<<"\nsize of the array crr[size1] : "<<size1;
    
    int brr[] = {4,3,2,1,0};
    int size2 = sizeof(brr)/sizeof(brr[0]);
    cout<<"\nPrint array brr[size2] : ";
    Print(brr,size2);
    cout<<"\nsize of the array crr[size2] : "<<size2;
    
    int size  = size1 + size2;
    int crr[size];
    cout<<"\nsize of the array crr[size] : "<<size;
    
    Merge(crr,size,arr,size1,brr,size2);
    cout<<"\nPrint the array crr[size]  :  ";
    Print(crr,size);
    
    return 0;
}
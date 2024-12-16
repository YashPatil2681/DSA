#include<iostream>
#include<algorithm>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void Merge(int crr[],int size,int arr[],int size1,int brr[],int size2){
    for(int i=0;i<size1;i++){
        crr[i] = arr[i];
    }
    for(int i=0;i<size2;i++){
        crr[size1+i] = brr[i];
    }
}
void BubbleSort(int arr[],int size){
    bool flag = false;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
                flag = true;
            }
        }
        if(!flag){  break;      }
    }
}

int main(){
    int arr[] = {1,2,3,8,7,6};
    int size1 = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of the arr[] is : "<<size1;
    cout<<"\nPrint array is arr[size1] :- ";
    Print(arr,size1);
    int brr[] = {-1,-2,-3};
    int size2 = sizeof(brr)/sizeof(brr[0]);
    cout<<"\nSize of the brr[] is : "<<size2;
    cout<<"\nPrint array is brr[size2] :- ";
    Print(brr,size2);
    int size = size1+size2;
    int crr[size];
    cout<<"\nsize of the array crr[size] is : "<<size;
    Merge(crr,size,arr,size1,brr,size2);
    cout<<"\nMerged array crr[size] : ";
    Print(crr,size);
    BubbleSort(crr,size);
    cout<<"\nMerged sorted array crr[size] : ";
    Print(crr,size);
    return 0;
}
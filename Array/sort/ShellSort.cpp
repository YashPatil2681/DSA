#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}
/*
    36| 26  13  10  23  7
    int gap = 3
    10  26| 13  36  23  7
    10  23  13| 36  26  7
    10| 23  7   36  26  13
    int gap = 1
    10  23| 7  36  26  13 
    7   10  23|36  26  13
    7   10  23 36| 26  13
    7  10   23   26  36|  13
    7  10  13  23  26  36 
*/
void ShellSort(int arr[],int size){
    for(int gap=size/2;gap>0;gap/=2){
        for(int i=gap;i<size;i++){
            int temp = arr[i];
            int j = i - gap;
            while(j>=0 && arr[j]>temp){
                arr[j+gap] = arr[j];
                j -= gap;
            }
            arr[j+gap] = temp;
        }
    }
}

int main(){
    int arr[] = {36,26,13,10,23,7};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of this array is :- "<<size;
    cout<<"\nPrint array :- ";
    Print(arr,size);
    ShellSort(arr,size);
    cout<<"\nPrint sorted array is :- ";
    Print(arr,size);
    return 0;
}
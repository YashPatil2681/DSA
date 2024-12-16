#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}
/*  32 21 25 11 10 13
    int gap = size/2=6/2=3
pass1: 
    32 21 25|11 10 13
    32|21 25 11 10 13
    11 21|25 32 10 13 
    11 10 25|32 21 13
    11 10 13|32 21 25
pass2:
    int gap=3/2=1
    10 11 13 32 21 25
    10 11 13 32 21 25
    10 11 13 32 21 25
    10 11 13 21 32 25
    10 11 13 21 25 32
*/
void ShellSort(int arr[],int size){
    for(int gap =size/2;gap>0;gap/=2){
        for(int i=gap;i<size;i++){
            int temp = arr[i];
            int j = i -gap;
            while(j >= 0 && arr[j]>temp){
                arr[j+gap] = arr[j];
                j -= gap;
            }
            arr[j+gap] = temp;
        }
    }
}
int main(){
    int arr[] = {32,21,25,11,10,13};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nSize of this array is :- "<<size;
    cout<<"\nPrint all array arr[size] :- ";
    Print(arr,size);
    ShellSort(arr,size);
    cout<<"\nsorted array is :- ";
    Print(arr,size);
    return 0;
}
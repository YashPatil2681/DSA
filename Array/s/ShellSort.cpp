#include<iostream>
#include<climits>
using namespace std;

void Print(int arr[],int size,int i = 0){
    if( i >= size ){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

void ShellSort(int arr[],int size){
    for ( int gap = size/2 ; gap > 0 ; gap/= 2){
        for (int i = gap ; i <size ; i += gap ){
            int temp = arr[i];
            int j = i - gap;
            while ( j>= 0 && arr[j] > temp ){
                arr[j+gap] = arr[j];
                j -= gap;
            }
            arr[j+gap] = temp;
        }
    }
}

int main(){
    int arr[] = {9,8,5,0};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nsize of this array is :- "<<size;
    cout<<"\nprint array :- ";
    Print(arr,size);
    ShellSort(arr,size);
    cout<<"\nsorted array is :- ";
    Print(arr,size);
    return 0;
}
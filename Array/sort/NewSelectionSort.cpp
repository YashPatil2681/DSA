#include<iostream>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void SelectionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        int min = i;
        for(int j=i+1;j<size;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[i],arr[min]);
        }
    }
}

int main(){
    int arr[] = {8,1,6,7,5,3,2};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of the array is :- "<<size;
    cout<<"\nPrint array arr[size] :- ";
    Print(arr,size);
    SelectionSort(arr,size);
    cout<<"\nPrint sorted array arr[size] :- ";
    Print(arr,size);
    return 0;
}
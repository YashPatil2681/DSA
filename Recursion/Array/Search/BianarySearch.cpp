#include<iostream>
using namespace std;
void Print(int arr[],int size,int i=0){
    if(i>=size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
} 
/*
    8,6,7,9,0,1,2,3
    8|6 7 9 0 1 2 3 
    6 8|7 9 0 1 2 3
    6 7 8|9 0 1 2 3 
    6 7 8 9|0 1 2 3 
    0 6 7 8 9|1 2 3
    0 1 6 7 8 9|2 3 
    0 1 2 6 7 8 9|3
    0 1 2 3 6 7 8 9|
*/
void InsertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
/* 
    8,6,7,9,0,1,2,3
    8|6 7 9 0 1 2 3
    0 1 2 3 6 7 8 9

*/

bool BianarySearch(int arr[],int size,int i,int j,int key){
    
    int mid = (i+j)/2;
    
    if(arr[mid]==key){
        return true;
    }
    else if(i >= j){
        return false;
    }
    else if(arr[mid]>key){
        return BianarySearch(arr,size,i,mid-1,key);
    }
    else{
        return BianarySearch(arr,size,mid+1,j,key);
    }
}

int main(){
    int arr[] = {8,6,7,9,0,1,2,3};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of this array is :- "<<size;
    cout<<"\nPrint array arr[size] :- ";
    Print(arr,size);
    InsertionSort(arr,size);
    cout<<"\nPrint sorted array is :- ";
    Print(arr,size);
    int key;
    cout<<"\nEnter key element is :- ";
    cin>>key;
    int i = 0;
    int j = size - 1;
    
    if(BianarySearch(arr,size,i,j,key)){
        cout<<endl<<key<<" element is found in this array ";
    }
    else{
        cout<<endl<<key<<" element is not found in this array ";
    }

    return 0;
}
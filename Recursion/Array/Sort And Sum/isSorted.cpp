/*
    1 6 8 4 2 
*/

#include<iostream>
using namespace std;
void Print(int arr[],int size,int index){
    if(index == size){
        return ;
    }
    cout<<arr[index]<<" ";
    Print(arr,size,index+1);
}

int isSorted(int arr[],int size){
    if(size==0 || size==1){
        return 0;
    }
    else if(arr[0]>arr[1]){
        return 1;
    }
    else{
        return isSorted(arr+1,size-1);
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of this array is :- "<<size;
    cout<<"\nPrint array is :- ";
    Print(arr,size,0);
    int ans = isSorted(arr,size);
    if(ans == 0){
        cout<<"\narray is sorted ";
    }
    else{
        cout<<"\narray is not sorted ";
    }

    return 0;
}
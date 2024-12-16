/*
    1 2 3 6 4 8 

*/

#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

bool LinearSearch( int arr[] , int size , int key , int i = 0  ){
    if(size == 0){
        return false;
    }
    else if( arr[0] == key ){
        return true;
    }
    return LinearSearch(arr+1,size-1,i,key);
}

int main(){
    int arr[] = {1,2,3,6,4,8};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of this arrray is :- "<<size;
    cout<<"\nPrint array arr[size] :- ";
    Print(arr,size);
    int key;
    cout<<"\nEnter key element :- ";
    cin>>key;
    if(LinearSearch(arr,size,key)){
        cout<<endl<<key<<" element is found in this array ";
    }
    else{
        cout<<endl<<key<<" element is not found in this array ";
    }
    return 0;
}
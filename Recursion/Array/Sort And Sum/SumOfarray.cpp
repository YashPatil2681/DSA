#include<iostream>
using namespace std;
void Print(int arr[],int size,int i){
    if(i >= size){
        return ;
    }
    
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

void Sum(int arr[],int size,int sum,int i){
    if(i >= size){
        return ;
    }
    sum += arr[i];
    Sum(arr,size,sum,i+1);
    cout<<"\nsum of above array is :- "<<sum;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nsizeof this array is :- "<<size;
    cout<<"\nPrint array arr[size] :- ";
    int i = 0;
    Print(arr,size,i);
    int sum = 0;
    Sum(arr,size,sum,i);
    
    return 0;
}
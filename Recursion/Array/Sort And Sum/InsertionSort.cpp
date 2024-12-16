#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}
/* 13 25 19 10 23 32
        
*/
void InsertionSort(int arr[],int size){
    if(size==0 || size==1){
        return;
    }
}
int main(){
    int arr[] = {13,25,19,10,23,32};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nsize of this array is :- ";

}
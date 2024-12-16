#include<iostream>
using namespace std;
/*  32 22 13 24 21 
    0  1  2  3  4 

    0 1 2 3 4 5 6 7 8 9
    0 1 3 4 5 5 5 5 5 5

    0   1   2   3   4
    21  22  32  13  24

    0 1 2 3 4 5 6 7 8 9
    0 1 4 5 5 5 5 5 5 5

    0   1   2   3   4 
    13  21  22  24  32

*/
void Print(int arr[],int size,int i=0){
    if(i >= size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);  
}

void radix(int arr[],int size){
    
}
int main(){
    int arr[] = {32,22,13,24,21};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of the size :- "<<size;
    cout<<"\nprint array arr[size] :- ";
    Print(arr,size);
    return 0;
}
#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}
/*   23 20 25 19 11 10
     10 20 25 19 11 23 
     10 11 25 19 20 23
     10 11 19 25 20 23
     10 11 19 20 25 23 
     10 11 19 20 23 25
*/
void SelectionSort(int arr[],int size){
    if(size==0 || size==1){
        return ;
    }

    
}
int main(){
    int arr[] = {23,22,25,19,11,10};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of this array is :- "<<size;


}
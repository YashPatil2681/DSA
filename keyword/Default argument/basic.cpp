/*   argument make optional is known as default argument 
    this is start from right end (int i,int j,int k = 0)
    simply we assign value to the rightest element 
 */

#include<iostream>
using namespace std;

void Print(int arr[],int size,int start = 0){
    for(int i = start;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of this array is :- "<<size;
    cout<<"\nprint array as default argument :- ";
    Print(arr,size);

    cout<<"\nnow,we add one argument :- ";
    Print(arr,size,2);
    return 0;
}
// for k=1
//1 2 3 4 5 6
//6 5 4 3 2 1
//5 6 1 2 3 4
#include<iostream>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void Reverse(int arr[],int size,int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of this array is : "<<size;
    int k;
    cout<<"\nK time's for : ";
    cin>>k;
    cout<<"\nPrint original array is : ";
    Print(arr,size);
    int i = 0;
    int j = size-1;
    Reverse(arr,size,i,j);
    cout<<"\nReversed array is : ";
    Print(arr,size);
    k %= size;
    i = 0;
    j = k;
    Reverse(arr,size,i,j);
    i = k+1;
    j = size-1;
    Reverse(arr,size,i,j);
    cout<<"\nPrint array after rotate the array is : ";
    Print(arr,size);
    return 0;
}
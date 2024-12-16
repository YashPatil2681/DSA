//1 2 3 4 5 6   k = 2
//6 5 4 3 2 1
//5 6 4 3 2 1
//5 6 1 2 3 4
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of the array is : "<<size;
    cout<<"\nPrint array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int i=0;
    int j=size-1;
    while(i<j){
        int temp = arr[i];
        arr[i]   = arr[j];
        arr[j]   = temp;
        i++;
        j--;
    }
    cout<<"\nRevesed array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int k;
    cout<<"\nEnter value of k : ";
    cin>>k;
    i = 0;
    j = k;
    while(i<j){
        int temp = arr[i];
        arr[i]   = arr[j];
        arr[j]   = temp;
        i++;
        j--;
    }
    cout<<"\nRevesed array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    i = k;
    j = size-1;
    while(i<j){
        int temp = arr[i];
        arr[i]   = arr[j];
        arr[j]   = temp;
        i++;
        j--;
    }
    cout<<"\nRevesed array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
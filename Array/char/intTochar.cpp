#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter element in the array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }   
    cout<<"Print element in the array : ";
    for(int i=0;i<size;i++){
        cout<<char(arr[i]+64)<<" ";
    }
    return 0;
}
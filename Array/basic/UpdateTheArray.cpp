#include<iostream>
using namespace std;

void update(int arr[],int size){
    cout<<"To update array enter element in array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    } 
    arr[3] = 0;
}

int main(){
    int arr[4]={1,2,3,4};
    cout<<"Print original array :  ";
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    int size;
    cout<<"\nEnter size of a array : ";
    cin>>size;
    update(arr,size);
    cout<<"After update the array is :  ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
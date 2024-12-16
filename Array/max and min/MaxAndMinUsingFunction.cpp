#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[10];
    cout<<"Enter ele : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Print ele : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nMaximum element in this array is : "<<getMax(arr,size);
}
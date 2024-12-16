#include<iostream>
#include<climits>
using namespace std;

void Input(int  arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int MIN(int arr[],int size){
    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int MAX(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter number in this array is :- ";
    Input(arr,n);
    cout<<"\nminimum no is in array is :- "<<MIN(arr,n);
    cout<<"\nmaximum no is in array is :- "<<MAX(arr,n);
    return 0;
}
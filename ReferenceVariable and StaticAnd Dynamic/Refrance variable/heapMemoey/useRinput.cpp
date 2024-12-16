#include<iostream>
using namespace std;
void Input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int Sum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter element in this array is :- ";
    Input(arr,n);

    cout<<"Sum is :- "<<Sum(arr,n);
    return 0;    
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of N :  ";
    cin>>n;
    int arr[n];
    cout<<"Enter element in the array :  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Print element in the array :  ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
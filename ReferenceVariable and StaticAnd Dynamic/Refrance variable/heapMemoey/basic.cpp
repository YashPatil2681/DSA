#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter value of this array :- ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Print value of this array :- ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
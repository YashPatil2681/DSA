#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of N : ";
    cin>>n;
    int arr[n];
    int i = 0;
    cout<<"Enter number in the array :  ";
    while(i<n){
        cin>>arr[i];
        i++;
    }
    cout<<"Print number in the array :  ";
    while(i<n){
        cout<<arr[i]<<"  ";
        i++;
    }
    return 0;
}
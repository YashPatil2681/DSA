#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,2,4,3,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for( int i=0;i<size;i++){
        sum += arr[i];
    }
    cout<<"\nsum is :- "<<sum;
    
}
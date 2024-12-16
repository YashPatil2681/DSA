#include<iostream>
using namespace std;
int Sum(int *arr,int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[] = {3,2,1,8,7,6};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size fo the array is :- "<<size;
    int Result = Sum(arr+3,3);
    cout<<"\nsum is :- "<<Result;
    return 0;
}
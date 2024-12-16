#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,4,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of the array is : "<<size;
    int i = 0;
    int j = size - 1;
    int flag = 0;
    while(i<j){
        if(arr[i]==arr[j]){
            cout<<"\nThis array is palindrome ";
            flag = 1;
        }
        i++;
        j--;
    }
    if(flag==0){
        cout<<"\nThis array is not-palindrome ";
    }
    return 0;
}
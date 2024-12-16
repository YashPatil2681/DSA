#include<iostream>
using namespace std;

void LinearSearch(int arr[],int size){
    bool flag = false;  /// element is not found this arr
    cout<<"\nPrint this array : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int Element;
    cout<<"\nmatch electron with array : ";
    cin>>Element;
    for(int i=0;i<size;i++){
        if(arr[i]==Element){
            cout<<"\nYes,Element is Present in this array at index is "<<i;
            flag = true;   // element is found this arr
            break;
        }
    }
    
    if(flag==false){
        cout<<"\nNo , Element is not Present in this array ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5,-1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of the array is : "<<size;
    LinearSearch(arr,size);
}
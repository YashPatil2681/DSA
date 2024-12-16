//correct below code
// 1 2 3 4 5 6 
//start = 0  end = n-1
// mid = (start+end)/2
//mid < end    start = mid + 1
//mid > end    end = mid - 1

#include<iostream>
using namespace std;
 
int main(){
    int arr[] = {1,2,3,4,5,6}; 
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size oF the array is : "<<size;
    cout<<"\nPrint The original is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int start = 0;
    int end = size - 1;
    int element;
    cout<<"\nEnter that element to search in this array : ";
    cin>>element;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==element){
            cout<<"\nElement is found ";
            break;
        }
        else if(arr[mid]<element){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    if(start>end){
        cout<<"\nElement is not found in this array ";
    }
    return 0;
}
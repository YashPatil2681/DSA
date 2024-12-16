#include<iostream>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int FirstBianarySearch(int arr[],int size,int key){
    int start = 0;
    int end   = size-1;
    int ans   = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int LastBianarySearch(int arr[],int size,int key){
    int start = 0;
    int end   = size-1;
    int ans   = -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid]>key){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1,2,3,3,3,3,3,3,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of the array is : "<<size;
    cout<<"\nPrint original array is : ";
    Print(arr,size);
    int key;
    cout<<"\nEnter key element : ";
    cin>>key;
    cout<<"\nFirst occurance of "<<key<<" at : "<<FirstBianarySearch(arr,size,key);
    cout<<"\nLast occurance of "<<key<<" at : "<<LastBianarySearch(arr,size,key);
    return 0;
}
//   0    2    3    4    3    0
// mid = (0+size-1)/2     (0+5)/2=2
// if(arr[mid]<arr[mid+1]){    start = mid + 1                           }
/*else{  (arr[mid]>=arr[mid+1])
        end = mid - 1
    }*/
#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}

int BianrySearch(int arr[],int size){
    int start = 0;
    int end   = size-1;
    while(start<end){
        int mid   = (start+end)/2;
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else{
            end   = mid;
        }
    }
    return start;
}
int main(){
    int arr[] = {0,1,2,3,2,0};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of this array is :  "<<size;
    cout<<"\nPrint original array : ";
    Print(arr,size);
    cout<<"\nElement is present at index : "<<BianrySearch(arr,size);;
}
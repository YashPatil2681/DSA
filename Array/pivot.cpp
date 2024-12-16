// 0             1            2          1             0
//  arr[i]<arr[i+1]     arr[i-1]< arr[mid]  >arr[i+1]    arr[i]>arr[i+1]
#include<iostream>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}

void Reverse(int arr[],int size,int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp = arr[i];
        arr[i]   = arr[j];
        arr[j]   = temp;
    }
}

int Pivot(int arr[],int size){
    int start = 0;
    int end   = size-1;
    int mid;
    while(start<end){
        int mid = (start+end)/2;
        if(arr[mid]>arr[0]){
            start = mid + 1;
        }
        else{
            end  = mid;
        }
    }
    return start;
}

int main(){
    int arr[]={10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of the array is : "<<size;
    cout<<"\nPrint original array is :  ";
    Print(arr,size);
    int i = 0;
    int j = size-1;
    Reverse(arr,size,i,j);
    cout<<"\nRevrsed array is : ";
    Print(arr,size);
    int k;
    cout<<"\nEnter value of K : ";
    cin>>k;
    k %= size;
    i = 0;
    j = k;
    Reverse(arr,size,i,k);
    i = k + 1;
    j = size - 1;
    Reverse(arr,size,i,k);
    cout<<"\nArray after rotate k time's  :  ";
    Print(arr,size);
    int Res = Pivot(arr,size);
    cout<<"\nPivot element is found at index :  "<<Res-1;
    cout<<"\nPivot element is : "<<arr[Res-1];
}
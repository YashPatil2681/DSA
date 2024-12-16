#include<iostream>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void SelectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int min = i;
        for(int j=i+1;j<size;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min != i){
            swap(arr[min],arr[i]);
        }
    }
}
void Ktimes(int arr[],int size,int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp = arr[i];
        arr[i]   = arr[j];
        arr[j]   = temp;
    }
}
// 30 40 50 10 20
int Pivot(int arr[],int size){
    int ans = -1;
    int i = 0;
    int j = size-1;
    int mid;
    while(i<j){
        mid = (i+j)/2;
        if(arr[mid]>arr[0]){
            i = mid + 1;
        }
        else{
            j= mid - 1;
        }
    }
    return i;
}
int main(){
    int arr[] = {50,40,30,20,10};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of the array is : "<<size;
    cout<<"\nPrint original array as it is : ";
    Print(arr,size);
    SelectionSort(arr,size);
    cout<<"\nPrint sorted arr is : ";
    Print(arr,size);
    int i = 0;
    int j =size-1;
    Ktimes(arr,size,i,j);
    cout<<"\nReversed array is : ";
    Print(arr,size);
    int k;
    cout<<"\nEnter vlaue of k : ";
    cin>>k;
    i = 0;
    k %= size;
    j = k;
    Ktimes(arr,size,i,j);
    i = k+1;
    j = size-1;
    Ktimes(arr,size,i,j);
    cout<<"After rotated array : "<< k<<" time's ::  ";
    Print(arr,size);
    int Result = Pivot(arr,size)-1;
    cout<<"\nIndex of pivot element is : "<<Result;
    cout<<"\nPivot element is : "<<arr[Result];
    return 0;
}
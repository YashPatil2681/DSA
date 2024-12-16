#include<iostream>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void Max(int arr[],int size){
    int max = arr[0];
    int smax = arr[0];
    int tmax = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            tmax = smax;
            smax = max;
            max  = arr[i];
        }
    }
    cout<<"\nMaximum element in this array is "<<max;
    cout<<"\nSecond maximum element in this array is : "<<smax;
    cout<<"\nThird maximum element in this array is : "<<tmax;
} 

void Min(int arr[],int size){
    int min = arr[0];
    int smin = arr[0];
    int tmin = arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            tmin = smin;
            smin = min;
            min  = arr[i];
        }
    }
    cout<<"\nMinimum element in this array is "<<min;
    cout<<"\nSecond Minimum element in this array is : "<<smin;
    cout<<"\nThird Minimum element in this array is : "<<tmin;
}
int main(){
    int arr[] = {1,-1,-2,2,3,-3,5};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of this array is : "<<size;
    cout<<"\nPrint all element in the array : ";
    Print(arr,size);
    Max(arr,size);
    Min(arr,size);
}
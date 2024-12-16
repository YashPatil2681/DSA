#include<iostream>
#include<climits>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

int getMax(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

void CountSort(int arr[],int size,int exp){
    int output[size];
    int i,count[10] = {0};
    for(i=0;i<size;i++){
        int digit = (arr[i]/exp)%10;
        count[digit]++;
    }
    for( i=1;i<10;i++){
        count[i] += count[i-1];
    }
    for( i=size-1;i>=0;i--){
        int digit = (arr[i]/exp)%10;
        count[digit]--;
        output[count[digit]] = arr[i];
    }
    for( i=0;i<size;i++){
        arr[i] = output[i];
    }
}

void RadixSort(int arr[],int size){
    int Max = getMax(arr,size);
    for(int exp = 1;Max/exp>0;exp *= 10){
        CountSort(arr,size,exp);
    }
}

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nsize of this array is :- "<<size;
    cout<<"\nPrint array arr[size] :- ";
    Print(arr,size);
    RadixSort(arr,size);
    cout<<"\nPrint sorted array :- ";
    Print(arr,size);
    return 0;
}
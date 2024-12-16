#include<iostream>
#include<climits>
using namespace std;

void Print(int arr[],int size,int i = 0){
    if( i >= size ){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

int getMax( int arr[],int size){
    int max = INT_MIN;

    for ( int i =0;i<size;i++ ){
        if ( arr[i] > max ){
            max = arr[i];
        }
    }
    return max;         
}

void countSort( int arr[],int size ,int exp){
    int output[size];
    int count[10] = {0};

    for ( int i = 0; i < size ; i++){
        int digit = (arr[i]/exp)%10;
        count[digit]++;
    }

    for(int i= 1; i < 10 ;i++){
        count[i] += count[i-1];
    }

    for(int i= size -1 ; i >= 0 ; i--){
        int digit = (arr[i]/exp)%10;
        count[digit]--;
        output[count[digit]] = arr[i];
    }

    for( int i=0;i<size;i++){
        arr[i] = output[i];
    }
}

void RadixSort(int arr[],int size){
    int max = getMax(arr,size);
    cout<<"\nMax is :- "<<max;
    for ( int exp = 1; exp / max >0; exp *= 10 ){
        countSort(arr,size,exp);
    }
}


int main(){
    int arr[] = {9,8,5,0};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nsize of this array is :- "<<size;
    cout<<"\nprint array :- ";
    Print(arr,size);
    RadixSort(arr,size);
    cout<<"\nsorted array is :- ";
    Print(arr,size);
    return 0;
}
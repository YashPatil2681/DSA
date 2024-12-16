#include<iostream>
using namespace std;

int SumOfArr(int arr[],int size){
    int sum = 0;
    cout<<"Print array :  ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
   int arr[] = {1,2,3,4,5,6,7};
   int size = sizeof(arr)/sizeof(arr[0]);
   cout<<"Size of this array is : "<<size<<endl;
   cout<<"\nSum of all element in this array  : "<<SumOfArr(arr,size);;
}
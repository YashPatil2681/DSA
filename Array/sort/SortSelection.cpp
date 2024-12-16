/* arr[] :- {9,8,7,6,5,4}
step 1  :-  9   8   7   6   5   4
step 2  :-  4   8   7   6   5   9
step 3  :-  4   5   7   6   8   9
step 4  :-  4   5   6   7   8   9
*/

#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void SelectSort(int arr[],int size){
    int min;
    for(int i=0;i<size-1;i++){
        min = i;
        for(int j=i+1;j<size;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min!=i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i]   = temp;
        }
    }
}
int main(){
    int arr[] = {9,8,7,6,5,4};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of this array is : "<<size;
    cout<<"\nPrint original array as it is : ";
    Print(arr,size);
    SelectSort(arr,size);
    cout<<"\nSorted array is :  ";
    Print(arr,size);
    return 0;
}
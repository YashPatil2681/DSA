/* arr[] :- {5,1,4,3,2};
pass 1  >>>>
step 1 :-  5   1   4    3     2
step 2 :-  1   5   4    3     2
step 3 :-  1   4   5    3     2
step 4 :-  1   4   3    5     2
step 5 :-  1   4   3    2     5

pass 2  >>>>
step 1 :-  1   4   3    2     5
step 2 :-  1   3   4    2     5
step 3 :-  1   3   2    4     5
step 4 :-  1   3   2    4     5

pass 3  >>>>
step 1 :-  1   3    2    4     5
step 2 :-  1   3    2    4     5
step 3 :-  1   2    3    4     5
*/


#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void BubbleSort(int arr[],int size){
    bool flag = false;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
                flag = true;
            }
        }
        if(!flag){  break;      }
    }
}

int main(){
    int arr[]= {5,4,3,2,1,99,12,1};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of this array is : "<<size;
    cout<<"\nPrint array as it is : ";
    Print(arr,size);
    BubbleSort(arr,size);
    cout<<"\nPrint array after BubbleSort : ";
    Print(arr,size);
    return 0;
}
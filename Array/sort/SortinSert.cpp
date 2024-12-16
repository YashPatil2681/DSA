/* arr[] = {10,2,5,1,7,3};
pass 1 >>>>
step 1 :-  10| 2  5  1  7  3
step 2 :-  2  10 | 5  1  7  3
pass 2 >>>>
step 1 :-  2  10 | 5  1  7  3
step 2 :-  2  10  5|  1  7  3
step 3 :-  2  5   10 |1  7  3
pass 3 >>>>
step 1 :-  2  5   10 | 1   7   3
step 2 :-  2  5   10  1 |  7   3
step 3 :-  .....
step 4 :-  1  2   5   10 |  7   3
pass 4 >>>>
step 1 :-  1   2   5   10   7  | 3
.
...
...
step 4 :- 1   2   5  7   10 /  3

pass 5 >>>>
step 1 :-  1   2   3   5    7   10   

*/

#include<iostream>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void InsertionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        int j = 1;
        while(j=1 && arr[j]>arr[j-1]){
            swap(arr[j],arr[j+1]);
            j--;
        }
    }
}

int main(){
    int arr[] = {10,2,5,1,7,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of the array is : "<<size;
    cout<<"\nPrint original array is : ";
    Print(arr,size);
    InsertionSort(arr,size);
    cout<<"\nPrint sorted array is :  ";
    Print(arr,size);
    return 0;
}
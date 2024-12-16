#include<iostream>
using namespace std;
void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
/*  Bubble Sort :- 10 2 3 11 8
    pass 1 :- 
    10  2  3  11  8
    2  10  3  11  8
    2  3  10  11  8 
    2  3  10  11  8 
    2  3  10  8   11
    pass 2 :- 
    2  3  10  8   11
    2  3  8   10  11
    pass  3 :- 
    2  3  8  10   11
 */
void BubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size-i-1;j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
}
/*  Selection Sort :- 10 2 3 11 8
        10  2  3  11  8 
        2 | 10  3  11  8 
        2   3 |10  11  8 
        2   3  8   11  10
        2   3   8   10  11
        
*/
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

/*   Insertion Sort :- 10 2 3 11 8
    10  2  3  11  8 
    int i = 1; temp = arr[i];
    2  10  3  11  8 
    2  3   10  11  8 
    2  3   10  11  8 
    2  3   8  10  11

*/

void InsertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int arr[] = {10,2,3,11,8};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of the array is : "<<size;
    cout<<"\nPrint original array is : ";
    Print(arr,size);
    BubbleSort(arr,size);
    cout<<"\nBubble sorted array is : ";
    Print(arr,size);
    SelectionSort(arr,size);
    cout<<"\nSelection sorted arrays is : ";
    Print(arr,size);
    cout<<"\nInsertion soeted array is : ";
    Print(arr,size);
    return 0;
}
#include<iostream>
using namespace std;

void Print(int arr[],int size,int i=0){
    if(i >= size){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,size,i+1);
}

/*
    9 2 1 3 4 0
pass 1
    2 9 1 3 4 0
    2 1 9 3 4 0
    2 1 3 9 4 0
    2 1 3 4 9 0
    2 1 3 4 0 9
pass 2
    1 2 3 4 0 9
    1 2 3 0 4 9
pass 3
    1 2 0 3 4 9
pass 4
    1 0 2 3 4 9
pass 5
    0 1 2 3 4 9
*/
void BubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void show(int arr[],int size,int s,int e){
    cout<<endl;
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }

}

int BianarySearch(int arr[],int size,int s,int e,int key){
   
    if(s > e){
        return false;
    }
    int mid = (s+e)/2;
    show(arr,size,s,e);
    cout<<"\nvalue of arr[mid] is :- "<<arr[mid];
    if(arr[mid] == key){
        return false;
    }
    else if(arr[mid] > key){
        BianarySearch(arr,size,s,mid-1,key);
    }
    else{
        BianarySearch(arr,size,mid+1,e,key);
    }
}

int main(){
    int arr[] = {9,2,1,3,4,0};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of this array is :- "<<size;
    cout<<"\nPrint all array is :- ";
    Print(arr,size);
    BubbleSort(arr,size);
    cout<<"\nsorted array is :- ";
    Print(arr,size);
    int s = 0;
    int e = size - 1;
    int key;
    cout<<"\nEnter key element in this array :- ";
    cin>>key;

    if(BianarySearch(arr,size,s,e,key)){
        cout<<endl<<key<<" element is found in this array ";
    }
    else{
        cout<<endl<<key<<" element is not found in this array ";
    }
    return 0;
}
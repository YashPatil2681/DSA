#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int FirstBianrySearch(int arr[],int size,int key){
    int i = 0;
    int j = size-1;
    int Ans = -1 ;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==key){
            Ans = mid;
            j = mid - 1;
        }
        else if(arr[mid]>key){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }
    return Ans;
}

int LastBianrySearch(int arr[],int size,int key){
    int i = 0;
    int j = size-1;
    int Ans = -1 ;
    while(i<=j){
        int mid = (i+j)/2;
        if(arr[mid]==key){
            Ans = mid;
            i = mid + 1;
        }
        else if(arr[mid]>key){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }
    return Ans;
}


int main(){
    int arr[] = {1,2,3,3,3,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of this array is : "<<size;
    cout<<"\nPrint all present element in the array : ";
    Print(arr,size);
    int key;
    cout<<"\nEnter key element : ";
    cin>>key;
    int Ans1 = FirstBianrySearch(arr,size,key);
    int Ans2 = LastBianrySearch(arr,size,key);
    cout<<"\nFirst key element is : "<<key<<" present at Index : "<<Ans1;
    cout<<"\nLast key element is : "<<key<<" present at Index : "<<Ans2;
    int count = Ans2-Ans1+1;
    cout<<"\nTotal element present is =: "<<count;
    return 0;
}
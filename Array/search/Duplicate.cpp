#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,3,6};
    int size  = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<"\nduplicate element is found & this element is : "<<arr[i];
                flag = false;
                break;
            }
        }
    }
    if(flag==true){
        cout<<"\nduplicate element is not found ";
    }
    return 0;
}














#include<iostream>
using namespace std;

void Print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}

void Duplicate(int arr[],int size){
    int found;
    for(int i=0;i<size;i++){
        int found = 0;
        for(int j=size-1;j<size;i++){
            if(arr[i]==arr[j]){
                cout<<"\nDuplicate element is found ";
                found = 1;
                break;
            }
        }
    }
    if(!found){
        cout<<"\nDuplicate element is not found ";
    }
}
int main(){
    int arr[] = {1,2,3,2,4};
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of this array is :  "<<size;
    cout<<"\nPrint original array : ";
    Print(arr,size);
    Duplicate(arr,size);
}
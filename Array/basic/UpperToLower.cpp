#include<iostream>
using namespace std;
void Print(char Arr[],int size){
    for(int i=0;i<size;i++){
        cout<<Arr[i]<<" ";
    }
}

void UpperToLower(char arr[],int size){
    int i = 1;
    while(arr[i]>65  && arr[i]<90){
        arr[i] += 32;
        i++;
    }
}

int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;
    char Arr[size];
    cout<<"Enter string : ";
    cin>>Arr;
    cout<<"\nPrint all string : ";
    Print(Arr,size);
    UpperToLower(Arr,size);
    cout<<"\nPrint all string : ";
    Print(Arr,size);
    return 0;
}
#include<iostream>
using namespace std;
void Print(char arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int Palindrome(char arr[],int size){
    int s = 0;
    int e = size - 1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;         
        }
        s++;
        e--;
    }
    return 1;
}
int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;
    char arr[size];
    cout<<"Enter arr :- ";
    cin>>arr;
    cout<<"Print arr :- ";
    Print(arr,size);
    int res = Palindrome(arr,size);
    if(res==1){
        cout<<"\nIt is a Palindrome :  ";
    }
    else{
        cout<<"\nIt is not Palindrome : ";
    }
    return 0;
}
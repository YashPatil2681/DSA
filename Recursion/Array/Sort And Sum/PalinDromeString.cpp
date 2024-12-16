#include<iostream>
using namespace std;

void Print(string arr,int i,int j){
    if(i > j){
        return ;
    }
    cout<<arr[i]<<" ";
    Print(arr,i+1,j);
}

void Reverse(string& arr,int i,int j){
    if(i > j){
        return ;
    }
    swap(arr[i],arr[j]);
    Reverse(arr,i+1,j-1);
}

bool PalinDrome(string& arr,int i,int j){
    if(i > j){
        return true;
    }
    else if(arr[i] != arr[j]){
        return false;
    }
    else{
        return PalinDrome(arr,i+1,j-1);
    }
}

int main(){
    string name;
    cout<<"Enter name :- ";
    cin>>name;
    int i = 0;
    int j = name.length() - 1;
    cout<<"\nPrint name of string :- ";
    Print(name,i,j);
    Reverse(name,i,j);
    cout<<"\n Reverse  the string :- ";
    Print(name,i,j);
    if(PalinDrome(name,i,j)){
        cout<<"\nIt is palindrome string ";
    }
    else{
        cout<<"\nIt is not palindrome string ";
    }
}
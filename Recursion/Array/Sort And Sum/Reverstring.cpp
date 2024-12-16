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

int main(){
    string name;
    cout<<"Enter name :- ";
    cin>>name;
    int i = 0;
    int j = name.length() - 1;
    cout<<"\n  Print  name  :- ";
    Print(name,i,j);
    Reverse(name,i,j);
    cout<<"\nreverse name  :- ";
    Print(name,i,j);
    return 0;
}